#include <stdio.h>
 
int main()
{
   char str[50];
 
   printf("Enter a string with space : ");
   gets(str);
 
   printf("You entered : %s", str);
 
   return(0);
}

========
 OUTPUT
========

Enter a string with space : Hello World
You entered : Hello World
