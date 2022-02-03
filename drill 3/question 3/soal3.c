#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b ,c;
	int m , n , p;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	m=abs(a-b);
	n=abs(b-c);
	p=abs(a-c);
	if(m==1 && n==1)
	{
		printf("%d",m+n+p);
	}
	else
	{
		if(m==1)
		{
			if(n==2 || p==2)
				printf("%d",m+n+p-2);
			else
				printf("%d",m+n+p-4);
		}
		else
		{
			if(n==1)
			{
				if(m==2 || p==2)
					printf("%d",m+n+p-2);
				else
					printf("%d",m+n+p-4);
			}
			else
			{
				if(p==1)
				{
					if(m==2 || n==2)
						printf("%d",m+n+p-2);
					else
						printf("%d",m+n+p-4);
				}
				else
				{
					printf("%d",m+n+p-4);
				}
			}
		}
	}
		
	return 0;
}
