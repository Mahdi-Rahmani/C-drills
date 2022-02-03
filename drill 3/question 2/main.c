#include <stdio.h>
#include <stdlib.h>
int main() {
	float a;
	float b;
	float c;
	float avg;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	avg=(a+b+c)/3;
	int count=0;
	if(a==avg)
	{
		count++;
	}
	if(b==avg)
	{
		count++;
	}
	if(c==avg)
	{
		count++;
	}
	if(count==0)
	{
		printf("%d",2);
	}
	if(count==1)
	{
		printf("%d",1);
	}
	if(count==3)
	{
		printf("%d",0);
	}
	

	return 0;
}
