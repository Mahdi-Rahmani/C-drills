#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int a, b ,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a==b&&b==c)
	{
		printf("%d",0);
	}
	else
	{
		if(a==b)
			printf("%d",2*(c-b-1));
		else
		{
			if(a==c)
				printf("%d",2*(b-a-1));
			else
			{
				if(b==c)
					printf("%d",2*(a-b-1));
				else
				{
					printf("%d",abs(a-b)+abs(a-c)+abs(b-c)-4);	
				}	
			}
		}
			
	}

	return 0;
}
