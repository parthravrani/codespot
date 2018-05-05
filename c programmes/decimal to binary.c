#include <stdio.h>
 
int main() {
 
  int n, c, k;
 
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
 
  printf("%d in binary number system is : ", n);
 
  for (c = 31; c >= 0; c--) {
 
    k = n >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 
  return 0;
}

========
 OUTPUT
========

Enter an integer in decimal number system :                                                                                 
253                                                                                                                         
253 in binary number system is : 00000000000000000000000011111101                                                                               
