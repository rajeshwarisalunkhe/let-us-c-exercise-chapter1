/* 19 Write a function to compute the distance between two points and use it to develope another function
that will compute the area of triangle whose vertices are A(x1, y1), B(x2, y2) and c(x3, y3)
Use these function to develope a function which returns a value 1 if the point (x, y) lies inside the triangle ABC
otherwise returns value 0. */


/* dot product
a.b = ax * bx + ay * by

cross product = 

*/
#include <stdio.h>
int flag(int ax, int ay, int bx, int by, int px, int py, int cx, int cy);
int cross_product(int ax, int ay, int bx, int by, int px, int py);


int main(void)
{
	int ax, ay, bx, by, cx, cy, px, py, ans;

	printf("enter x and y co-ordinates of first point of triangle:");
	scanf("%d%d", &ax, &ay);

	printf("enter x and y co-ordinates of second point of triangle:");
	scanf("%d%d", &bx, &by);

	printf("enter x and y co-ordinates of third point of triangle:");
	scanf("%d%d", &cx, &cy);

	printf("enter x and y co-ordinates of the point :");
	scanf("%d%d", &px, &py);
	
	ans = flag(ax, ay, bx, by, cx, cy, px, py);
	
	if(ans == 1)
	{
		printf("point is inside the triangle\n");
	}
	else
	{
		printf("point is outside the triangle\n");
	}
	

}


int flag(int ax, int ay, int bx, int by, int cx, int cy, int px, int py)
{
	int cp1, cp2, cp3;
	
	cp1 = cross_product(ax, ay, bx, by, px, py);

	cp2 = cross_product(bx, by, cx, cy, px, py);

	cp3 = cross_product(cx, cy, ax, ay, px, py);
	
	if((cp1 > 0 && cp2 > 0 && cp3 > 0) || (cp1 < 0) && (cp2 < 0) && (cp3 < 0))
	{
		return 1;
	}
	else if(cp1 == 0)
	{
		if((cp2 > 0 && cp3 > 0) || (cp2 < 0 && cp3 < 0))
		{		
			return 1;
		}
		else if((cp2 > 0 && cp3 < 0) || (cp2 < 0 && cp3 > 0))
		{
			return 0;
		}

	}
	else if(cp2 == 0)
	{
		if((cp1 > 0 && cp3 > 0) || (cp1 < 0 && cp3 < 0))
		{		
			return 1;
		}
		else if((cp1 > 0 && cp3 < 0) || (cp1 < 0 && cp3 > 0))
		{
			return 0;
		}
	}
	else if(cp3 == 0)
	{
		if((cp2 > 0 && cp1 > 0) || (cp2 < 0 && cp1 < 0))
		{		
			return 1;
		}
		else if((cp2 > 0 && cp1 < 0) || (cp2 < 0 && cp1 > 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	
} 

int cross_product(int ax, int ay, int bx, int by, int px, int py)
{
	int ans;
	
	ans = (px - ax) * (by - ay) - (bx - ax) * (py - ay);
	return ans;


}


