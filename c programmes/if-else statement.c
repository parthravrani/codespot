#include <stdio.h>
 
int main() {
 
  int number;
 
  printf("Please enter a number: ");
  scanf("%d", &number);
 
  if (number < 100) {
 
    printf("Number is less than 100!\n");
 
  } else if (number == 100) {
 
    printf("Number is 100!!\n");
 
  } else {
 
    printf("Number is greater than 100!\n");
 
  }
 
  return 0;
}

========
 OUTPUT
========

Please enter a number: 100
Number is 100!!
