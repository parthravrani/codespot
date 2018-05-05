#include <stdio.h>
 
int main()
{
    int a[10][10];
    int i, j, row, column, flag = 1;
 
    printf("Enter the dimensions of the matrix A : ");
    scanf("%d %d", &row, &column);
    printf("Enter the elements of matrix A \n");
 
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("MATRIX A is \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
 
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] != 1 && a[j][i] != 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1 )
        printf("It is identity matrix \n");
    else
        printf("It is not a identity matrix \n");
}

========
 OUTPUT
========

Enter the dimensions of the matrix A : 3 3
Enter the elements of matrix A
1 0 0
0 1 0
0 0 1
MATRIX A is
  1  0  0
  0  1  0
  0  0  1
It is identity matrix
