#include <stdio.h>
 
int main()
{
   int array[100], position, c, n;
 
   printf("Enter number of elements you want to add in array :\n");
   scanf("%d", &n);
 
   printf("Enter %d elements : \n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   printf("Enter the location from where you want to delete element :\n");
   scanf("%d", &position);
 
   if ( position >= n+1 )
      printf("Deletion is not possible.\n");
   else
   {
      for ( c = position - 1 ; c < n - 1 ; c++ )
         array[c] = array[c+1];
 
      printf("Resultant array is :\n");
 
      for( c = 0 ; c < n - 1 ; c++ )
         printf("%d\n", array[c]);
   }
 
   return 0;
}

======== 
 OUTPUT
========

Enter number of elements you want to add in array :                                                                         
3                                                                                                                           
Enter 3 elements :                                                                                                          
2                                                                                                                           
5                                                                                                                           
3                                                                                                                           
Enter the location from where you want to delete element :                                                                  
2                                                                                                                           
Resultant array is :                                                                                                        
2                                                                                                                           
3 
