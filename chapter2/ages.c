// 6 if the aes of ram shyam and ajay are input through the keyboard write a proram to determine youngest of the three

#include <stdio.h>

int main(void)
{
	int ram, sham, ajay;
	printf("enter the ages of ram, sham and ajay:");

	scanf("%d%d%d", &ram, &sham, &ajay);
	
	if(ram < sham && ram < ajay)
	{
		printf("ram is the youngest one\n");
	}
	else if(sham < ram && sham < ajay)
	{
		printf("sham is the youngest one\n");
	}
	else
	{
		printf("ajay is the youngest one\n");
	}
}
