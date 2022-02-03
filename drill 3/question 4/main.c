#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	long int a;
	int residue;
	long int cpy1;
	long int cpy2;
	long int num=0;
	long int inv=0;
	scanf("%ld",&a);
	if(a<0)
		a*=-1;
	cpy1=a;
	while(cpy1>=7)
	{
		residue=cpy1%7;
		cpy1/=7;
		num=num*10+residue;
	}
	num=num*10+cpy1;

	cpy2=num;
	while(cpy2!=0)
	{
		residue=cpy2%10;
		cpy2=cpy2/10;
		inv=inv*10+residue;
	}
	cpy1=a;
	while(cpy1%7==0&&cpy1!=0)
	{
		inv*=10;
		cpy1/=7;
	}

	if(inv==num)
		printf("True");
	else
		printf("False");
	
	return 0;
}
