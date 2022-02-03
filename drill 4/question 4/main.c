#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int palindrome(int new_num)
{
	int cpy2,residue,inv=0;
	cpy2=new_num;
	while(cpy2!=0)
	{
		residue=cpy2%10;
		cpy2=cpy2/10;
		inv=inv*10+residue;
	}
	if(new_num==inv)
		return 1;
	else
		return 0;
}
int base_change(int x,int y,int z)
{
	int cpy,residue;
	int num=0,num2=0;
	int count=0;
	cpy=x;
	while(cpy!=0)
	{
		residue=cpy%10;
		num+=residue*pow(y,count);
		cpy=cpy/10;
		count++;
	}
	count=0;
	cpy=num;
	while(cpy!=0)
	{
		residue=cpy%z;
		num2+=residue*pow(10,count);
		cpy=cpy/z;
		count++;
	}
	return num2;
}
int main() {
	int a,b,c;
	int new_num;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	new_num=base_change(a,b,c);
	if(palindrome(new_num)==1)
		printf("Yes");
	else
		printf("No");

	return 0;
}
