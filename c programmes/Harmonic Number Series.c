#include<stdio.h>
#include<conio.h>

void main()
{
	double n,sum=0,i;
	clrscr();

	printf("Please Enter a value for 'n' :  ");
	scanf("%lf",&n);

	for(i=1;i<=n;i++)
	{
		sum = sum + (1/i);
		if(i==1)
			printf("\n 1 +");
		else if(i==n)
		printf(" (1/%d)  ",i);
		else
			printf(" (1/%d) + ",i);
	}

	printf("\n\n The sum of this series is %.2lf",sum);
	getch();
}

========
 Output
========

Please Enter a value for 'n' :  5                                                                                           
                                                                                                                            
1 + (1/5) +  (1/9) +  (1/9) +  (1/9)                                                                                       
                                                                                                                            
The sum of this series is 2.28 
