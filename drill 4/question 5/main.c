#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int array_01(int row,long long col)
{
	long long i,j,x,z,y,n,t;
	n=1;
	if(row>20)
	{
		t=(long long)pow(2,19);
		if(col<t)
			row=19;
	}
	x=(long long)pow(2,row-1);
	int num[x];
	num[0]=0;
	while(n!=row)
	{
		y=(long long)pow(2,n-1);
			for(j=0;j<y;j++)
		{
			z=j+y;
			num[z]=1-num[j];
		}
		n++;
	}
	return num[col-1];
}

int main() {
	int a,x,y,z;
	long long b;
	int n,i,j;
	scanf("%d",&a);
	scanf("%lld",&b);
//	printf("%d",array_01(a,b));
	x=(long long)pow(2,19);
	int c[x];
	return 0;
}
