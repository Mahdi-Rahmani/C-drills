#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	int i,j;
	scanf("%d",&a);
	scanf("%d",&b);
	if((a-b)%2!=0 || b>=a || a<=0||b<0)
	{
		printf("Not Possible");
	}
	else
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(i<(a-b)/2||i>=(a+b)/2)
				{
					printf("* ");
				}
				else
				{
					if(j<(a-b)/2||j>=(a+b)/2)
					{
						printf("* ");
					}
					else
					{
						printf("  ");
					}
				}
			}
			if(i!=a-1)
				printf("\n");
		}
	}
	return 0;
}
