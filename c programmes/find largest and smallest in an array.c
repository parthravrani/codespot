#include<stdio.h>
 
int main()
{
  int a[50],size,i,big,small;
 
  printf("Enter the size of the array : ");
  scanf("%d",&size);
 
  printf("Enter %d elements in the array : \n", size);
  for(i=0;i<size;i++)
  {
      scanf("%d",&a[i]);
  }
 
  big=a[0];
  for(i=1;i<size;i++)
  {
      if(big<a[i])
      {
          big=a[i];
      }
  }
  printf("Largest number in array : %d",big);
 
  small=a[0];
  for(i=1;i<size;i++)
  {
      if(small>a[i])
      {
          small=a[i];
      }
  }
  printf("\nSmallest number in array : %d",small);
 
  return 0;
}

========
 OUTPUT
========

Enter the size of the array : 3                                                                                             
Enter 3 elements in the array :                                                                                             
5                                                                                                                           
6                                                                                                                           
9                                                                                                                           
Largest number in array : 9                                                                                                 
Smallest number in array : 5  
