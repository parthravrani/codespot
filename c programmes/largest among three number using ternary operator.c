#include<stdio.h>

int main()
{
  int a,b,c,big;
  printf("Enter 3 numbers:");
  scanf("%d %d %d",&a,&b,&c);
 
  big=( a>b && a>c ? a:b>c ? b:c );
  printf("\nThe biggest number is: %d",big);
 
  return 0;
}

========
 OUTPUT
========

Enter 3 numbers:5 8 4

The biggest number is: 8
