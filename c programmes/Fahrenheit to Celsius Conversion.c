#include <stdio.h>

int main (void)
{

	int fahrenheit;
	double celsius;

	printf("Enter the temperature in degrees fahrenheit :");
	scanf("%d", &fahrenheit);
	celsius = (5.0/9.0) * (fahrenheit-32);
	printf ("The converted temperature is : %lf\n", celsius);

	return 0;

}

========
 Output
========

Enter the temperature in degrees fahrenheit : 68                                                                            
The converted temperature is : 20.000000 

