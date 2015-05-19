#include <stdio.h>
#include <math.h>
int ps(int num)
{
	float res = sqrt(num);
	int a = res;
	if (a==res)
	return 1;
	else 
	return 0; 
}

int main() 
{
	int a;
	scanf("%d",&a);
	int r = ps(a);
	if (r==1)
	{
		printf("Perfect Square !!!!");
	}
	else 
	{
		printf("Not perfect square !!!");
	}
	return 0;
}
