#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int crappyCalc();
int lessCrappyCalc();
int addition();
int subtract();
int multiply();
int divide();
int sq();
int sqroot();

int main() {
  char calc;

  printf("Which super limited calculator would you like to use?");
  printf("\n 1) Crappy Calculator \t\t 2) Slightly less Crappy Calculator\n\nEnter your selection:\n");
  scanf("%c", &calc);

  if (calc == '1') {
    crappyCalc();
  }
  else if (calc == '2') {
    lessCrappyCalc();
  }
  else if (calc != '1' && calc != '2') {
    printf("That didn't work. You can only select option 1 or 2.");
  }

  return 0;
}

int crappyCalc() {
  char op;
  double n1,n2,res;

  printf("Choose an operator (+, -, *, /) to calculate the answer\n");
  scanf("%c", &op);

  if (op == '+') {
    printf("You have selected: Addition\n");
  }
  else if (op == '-') {
    printf("You have selected: Subtraction\n");
  }
  else if (op == '*') {
    printf("You have selected: Multiplication\n");
  }
  else if (op == '/') {
    printf("You have selected: Division\n");
  }

  printf("Enter the first number:\n");
  scanf("%lf", &n1);
  printf("Enter the second number:\n");
  scanf("%lf", &n2);

  switch(op) {
    case '+':
      res = n1 + n2;
      printf("Addition: %lf + %lf = %lf", n1, n2, res);
      break;
    case '-':
      res = n1 - n2;
      printf("Subtraction: %lf - %lf = %lf", n1, n2, res);
      break;
    case '*':
      res = n1 * n2;
      printf("Multiplication: %lf * %lf = %lf", n1, n2, res);
      break;
    case '/':
      res = n1/n2;
      printf("Division: %lf/%lf = %lf", n1, n2, res);
      break;
    default:
      printf("Something went wrong. Please follow the available options.");
  }
  return 0;
}

int lessCrappyCalc() {
  int op;

  do {
    printf("Select the desired operation to preform the calculation:\n");
    printf("\n 1) Addition\t\t 2) Subtraction\n 3) Multiplication\t 4) Division\n 5) Square\t\t 6) Square Root\n 7) Exit\n\nEnter the number of you choice: \n");
    scanf("%d", &op);

    switch (op) {
      case 1:
        addition();
        break;
      case 2:
        subtract();
        break;
      case 3:
        multiply();
        break;
      case 4:
        divide();
        break;
      case 5:
        sq();
        break;
      case 6:
        sqroot();
        break;
      case 7:
        exit(0);
        break;
      default:
        printf("Something went wrong!!");
        break;
    }
    printf("\n\n ********************************************* \n\n");
  } while (op != 7);

  return 0;
}

int addition() {
  int i, arr_size, add_num;
  int* sum;

  printf("How many numbers do you want to add: ");
  scanf("%d", &arr_size);
  sum = calloc(arr_size, sizeof(int));
  if (sum == NULL) {
    printf("There is not enough memory to add %d numbers.", arr_size);
    return 1;
  }
  printf("Enter a number followed by enter: ");

  for (i = 0; i < arr_size; i++) {
    scanf("%d", &add_num);
    sum[i] = add_num;
  }

  int acc = 0;
  for (i = 0; i < arr_size; i++) {
    printf("%d ", sum[i]);
    if (i != arr_size - 1) {
      printf("+ ");
    }
    acc = acc + sum[i];
  }

  printf(" = %d", acc);
  free(sum);

  return 0;
}

int subtract() {
  int n1, n2, res;
  printf("The first number is: ");
  scanf("%d", &n1);
  printf("The second number is: ");
  scanf("%d", &n2);
  res = n1 - n2;
  printf("\n Subtraction: %d - %d = %d", n1, n2, res);
  return 0;
}

int multiply() {
  int n1, n2, res;
  printf("The first number is: ");
  scanf("%d", &n1);
  printf("The second number is: ");
  scanf("%d", &n2);
  res = n1 * n2;
  printf("\n Multiplication: %d * %d = %d", n1, n2, res);
  return 0;
}

int divide() {
  int n1, n2, res;
  printf("The first number is: ");
  scanf("%d", &n1);
  printf("The second number is: ");
  scanf("%d", &n2);
  res = n1/n2;

  if (n2 == 0) {
    printf("\n Divisor cannot be zero. Please enter another value: ");
    scanf("%d", &n2);
  }
  printf("\n Multiplication: %d/%d = %d", n1, n2, res);
  return 0;
}

int sq() {
  int n1, res;
  printf("Enter a number to get its Square: ");
  scanf("%d", &n1);

  res = n1 * n1;
  printf("\n The Square of %d is: %d", n1, res);
  return 0;
}

int sqroot() {
  float res;
  int n1;
  printf("Enter a number to get its Square Root: ");
  scanf("%d", &n1);

  res = sqrt(n1);
  printf("\n The Square Root of %d is: %f", n1, res);
  return 0;
}

// int newstrlen(char * string) {
//   int len = 0;

//   for (int i; i = 0; i++) {
//     if (string[i] != '\0') {
//       len ++;
//     } else {
//       return len;
//     }
//   }
// }

// int main(int argc, char * argv[]) {
//   // char * test = "";
//   char test[] = {'M', 'e', 'g', 'a', 'n'};
//   // test[2] = '\0';
//   int test_len = newstrlen(test);

//   printf("%#lx\n", (unsigned long) test);
//   printf("%d\n", test_len);
//   printf("%s", test);
//   return 0;
// }
