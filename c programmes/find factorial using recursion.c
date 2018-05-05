#include<stdio.h>

int fact(int);
int main()
{
  int num,f;
   
  printf("Enter a number to find factorial : ");
  scanf("%d",&num);
   
  f=fact(num);
   
  printf("Factorial of %d is: %d",num,f);
   
  return 0;
}
 
int fact(int n)
{
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
}

========
 OUTPUT
========

Enter a number to find factorial : 3                                                                                        
Factorial of 3 is: 6
