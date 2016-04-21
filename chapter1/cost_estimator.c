// 12) If the total selling price of 15 items and the total profit earned on them is input through the keyboard write a program to find cost price of one item.

#include <stdio.h>

int main(void)
{
	int selling_price, profit, cost_price;

	printf("enter selling price and profit of 15 items:");
	scanf("%d %d", &selling_price, &profit);

	cost_price = selling_price - profit;

	printf("cost price of one item is: %d\n", cost_price/15);

}
