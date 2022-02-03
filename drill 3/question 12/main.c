#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int x,y,i;
	int j=0;
	scanf("%d",&n);
	x=pow(10,n-1);
	y=pow(10,n);
	int cpy,residue;
	for(i=x;i<y;i++)
	{
		j=0;
		cpy=i;
		while(cpy!=0)
		{
			residue=cpy%10;
			if(residue==0)
			{
				cpy=0;
				j++;
			}
			else
			{
				if(i%residue==0)
				{
					cpy=0;
					j++;
				}
			}
			cpy=cpy/10;
		}
		
		if(j==0)
		{
			printf("%d",i);
			break;
		}
	}

	if(i==y)
	{
		printf("no corona");
	}
	return 0;
}
