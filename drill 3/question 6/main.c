#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long int n;
	scanf("%ld",&n);
//	while(n>100000)
//	{
//		scanf("%d",&n);
//	}
	long long int sum=0;
	long long int i ,j;
	long long int cpy;
	long long int m[n];
	for(i=1;i<n;i++)
	{
		sum=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
			m[i]=sum;
		}
	}
	for(i=1;i<n;i++)
	{
	//	if(i==cpy)
		//	continue;
		if(m[i]!=i)
		{
			if(m[i]<n)
			{
				if(m[m[i]]==i)
				{
					printf("%ld-%ld\n",i,m[i]);
					//	i=m[i]+1;
				}
			}
		}
	}
	return 0;
}
