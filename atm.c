#include<stdio.h>
int main()
{

	int x;
	float y;
	scanf("%i",&x);
	scanf("%f",&y);
	if((0<x)&&(x<=2000)&&(0<=y)&&(y<=2000))
	{if((x%5==0)&&((y-x)>=0.50))
	y=y-(x+0.50);
	}
	printf("%.2f",y);
	return 0;
	
	}
