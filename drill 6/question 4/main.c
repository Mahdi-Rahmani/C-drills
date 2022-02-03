#include <stdio.h>
#include <stdlib.h>
int arr_pos[50001];
int arr_neg[50001];

int main() {
	long long n,i,entery,sum=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&entery);
		if(entery>=0)
		{
			arr_pos[entery]++;
		}
		else
		{
			entery*=-1;
			arr_neg[entery]++;
		}
	}
	for(i=0;i<50001;i++)
	{
		if(arr_pos[i]!=0)
		{
			sum+=i;
		}
		if(arr_neg[i]!=0)
		{
			sum-=i;
		}
	}
	printf("%lld",sum);
	return 0;
}
