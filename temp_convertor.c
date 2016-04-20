// 4)temp of a city in fahrenheit degrees is input through the keyboard. Write a program to convert this temp into centigrade degrees


#include <stdio.h>

int main(void)
{
	float ctemp, ftemp;
	printf("enter the temp in fahrenheit:");
	scanf("%f", &ftemp);

	ctemp = 5 * (ftemp -32) / 9;
	
	printf("temp in degree celcius is %f\n", ctemp);

} 
