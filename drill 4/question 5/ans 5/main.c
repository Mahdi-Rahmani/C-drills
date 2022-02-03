#include <stdio.h>
#include <stdlib.h>


int main() {
	long long a , b , count1, cpy;
	int residue=0;
	scanf("%lld",&a);
	scanf("%lld",&b);
	cpy=b-1;
	count1=0;
	while(cpy!=0)
	{
		residue=cpy%2;
		if(residue==1)
		{
			count1++;
		}
		cpy/=2;
	}
	if(count1%2==1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
