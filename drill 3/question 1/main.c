#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	int b;
	int k;
	int z=0;
	int cpya;
	int counter1=0;
	int counter2=0;
	int i=0;
	int ans;
	int dif1;
	int dif2;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&k);
	int change;
	if(a>b)
	{
		change=a;
		a=b;
		b=change;
	}
	cpya=a;	
	if(a%k==0&&b%k==0)
	{
		printf("%d",(b-a)/k);
	}
	else
	{
		if(a%k==0)
		{
			while(a+k*i<=b)
			{
				i++;
			}
			dif1=(a+k*i)-b;
			dif2=b-(a+k*(i-1));
			if(dif2<=dif1)
			{
				printf("%d",i-1+dif2);
			}
			else
				printf("%d",i+(dif1));
		}
		else
		{
			while(cpya%k!=0 && cpya!=b)
			{
				cpya++;
				counter1++;
			}
			if(cpya==b)
			{
				z++;
			}
			cpya=a;
			while(cpya%k!=0)
			{
				cpya--;
				counter2++;
			}
		
			if(counter2<counter1)
			{
				while(a-counter2+k*i<=b)
				{
					i++;
				}
				dif1=(a-counter2+k*i)-b;
				dif2=b-(a-counter2+k*(i-1));
			//	printf("%d\n",dif1);
			//	printf("%d\n",dif2);
			//	printf("%d\n",z);
			//	printf("%d\n",counter1);
				if(dif2<=dif1)
				{
					if(z==1 && counter1<i+(b-(a-counter2+k*(i-1))+counter2-1))
					{
						printf("%d",counter1);
					}
					else
						printf("%d",i+(b-(a-counter2+k*(i-1))+counter2-1));
				}
				else
				{
					if(z==1 && counter1<i+(dif1)+counter2)
					{
						printf("%d",counter1);
					}
					else
						printf("%d",i+(dif1)+counter2);
				}
				
		
			}
			else
			{
				while(a+counter1+k*i<=b)
				{
					i++;
				}
				dif1=(a+counter1+k*i)-b;
				dif2=b-(a+counter1+k*(i-1));
				if(dif2<=dif1)
				{
					printf("%d",i+(dif2)+counter1-1);
				}
				else
					printf("%d",i+(dif1)+counter1);
			}
		}
	}
	
	return 0;
}
