#include <stdio.h>
#include <math.h>
// Prime number or not

int main() 
{
	int num;
	scanf("%d",&num);
	int i;
	int yes;
	for (i=3;i<num;i=i+2)
	{
		if (num%i == 0)
		yes = 0;
		else
		yes = 1;
	}
	if (yes == 1)
	{
		printf("Prime Number !!!!!");
	}
	else
	{
		printf("Not a Prime Number !!!");
	}
	return 0;
}
