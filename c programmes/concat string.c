#include <stdio.h>
#include <string.h>
 
int main()
{
   char a[100], b[100];
 
   printf("Enter the first string : ");
   gets(a);
 
   printf("Enter the second string : ");
   gets(b);
 
   strcat(a,b);
 
   printf("String after concatenation is : %s\n",a);
 
   return 0;
}

========
 OUTPUT
========

Enter the first string : Code
Enter the second string : Spot
String after concatenation is : CodeSpot
