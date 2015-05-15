#include <stdio.h>


int main () {
	int num ,i;
	int p = 0;
	int sum = 0;
	printf("Enter number :");
	scanf("%d",&num);
	int ver = num;
	for (i=0;i<3;i++)
	{
	int q = num % 10;
	sum = sum + q*q*q;
	num = num/10;
	}
	if (sum == ver)
	{
		printf("armstrong !!!!");
	}
	else printf("Not an armstrong number !!");
	return 0;
}
