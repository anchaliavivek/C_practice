#include <stdio.h>


int main () {
	char a[10] = {'v','i','v','e','k','\0'};
	char b[10] = {'r','a','s','h','m','i','\0'};
	char final[20];
	int i;
	int len = strlen(a);
	int len1 = strlen(b);
	for (i=0;i<len + len1 + 1;i++)
	{
		if (i<len)
		final[i] = a[i];
		else 
		final[i] = b[i-len];
	}
	printf("cancatenation string : %s\n",final);
	return 0;
}
