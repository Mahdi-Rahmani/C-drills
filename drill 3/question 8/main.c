#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i;j++)
		{
			printf(" ");
		}
		for(j=0;j<n-i;j++)
		{
			printf("*");
		}
		printf("\n");

	}
	for(i=n-2;i>=0;i--)
	{
		for(j=0;j<2*i;j++)
		{
			printf(" ");
		}
		for(j=0;j<n-i;j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}
