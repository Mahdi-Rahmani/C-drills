#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int x;
int emtiaz;
void check(int sum)
{
	float ashar;
	int sahih;
	ashar=sqrt(sum);
	sahih=sqrt(sum);
	if(ashar-sahih==0)
	{
		emtiaz++;
	}
}
void spiral(int m,int n, int a[x][x])
{
	int i,k=0,l=0;
	int sum=0;
	while(k<m&&l<n)
	{
		for(i=l;i<n;i++)
		{
			sum+=a[k][i];
			check(sum);
		}
		k++;
		
		for(i=k;i<m;i++)
		{
			sum+=a[i][n-1];
			check(sum);
		}
		n--;
		
		if(k<m)
		{
			for(i=n-1;i>=l;i--)
			{
				sum+=a[m-1][i];
				check(sum);
			}
			m--;
		}
		
		if(l<n)
		{
			for(i=m-1;i>=k;i--)
			{
				sum+=a[i][l];
				check(sum);
			}
			l++;
		}
	}
}
int main() {

	scanf("%d",&x);
	int arr[x][x];
	int f=0,i,j;
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	spiral(x,x,arr);
	printf("%d",emtiaz);
	return 0;
}
