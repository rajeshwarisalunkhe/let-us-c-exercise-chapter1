/* 20 The policy followed by a company to process customer orders is given by the following rules
1) if a customer order quantity is less than or equal to that in stock and his credit is OK supply his requirement
2) If his credit is not ok do not supply send him an intimation
3) If his credit is ok but the item in stock is less than his order, supply what is in stock. Intimate to him the date on which the balance will be shipped.
write a c program to implement company policy
*/

#include <stdio.h>

int main(void)
{
	int customer_order, stock, credit;

	printf("enter customer order, stock and credit. if credit is ok press 1 if not press 0:");
	scanf("%d%d%d", &customer_order, &stock, &credit);

	if(customer_order < stock && credit == 1)
	{
		printf("order will be supplied\n");
	}
	else if(credit == 0)
	{
		printf("please pay credit first\n");
	}
	else if(customer_order > stock && credit == 1)
	{
		printf("remaining order will be shipped after 15 days\n");
	}
}  
