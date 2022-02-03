#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int b, c;
	int i;
	int j;
	int sum=0;
	int cpy;
	int residue;
	scanf("%d",&b);
	scanf("%d",&c);
	if(c<10)
	{
		j=pow(10,b-1);
		printf("%d",c*j);

	}
	else
	{
		for(i=pow(10,b)-1;i>=pow(10,b-1);i--)
		{
			sum=0;
			cpy=i;
			while(cpy!=0)
			{
				residue=cpy%10;
				cpy/=10;
				sum+=residue;
			}
			if(sum==c)
			{
				printf("%d",i);
				break;
			}
		}
	}
	

	return 0;
}
