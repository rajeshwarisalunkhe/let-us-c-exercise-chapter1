// 1 If a cost price and selling price of an item is input through the keyboard, write a program to determine wheather the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.


#include <stdio.h>

int main(void)
{
	int cost_price, selling_price, profit, loss;

	printf("enter cost price and selling price:");
	scanf("%d %d", &cost_price, &selling_price);

	if(selling_price > cost_price)
	{
		printf("seller has made profit\n");		
		profit = selling_price - cost_price;
		printf("profit is %d rs\n", profit);
	}
	else if(selling_price == cost_price)
	{
		printf("no profit no loss\n");
	}
	else
	{
		printf("seller has incurred loss\n");	
		loss = cost_price - selling_price;		
		printf("loss is %d rs\n", loss);
	}
}  
