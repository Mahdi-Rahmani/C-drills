#include <stdio.h>
#include <stdlib.h>


int main() {
	int a;
	int b;
	printf("please enter a & b :\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the new value of a & b:\na=%d  b=%d",a,b);
	
	
	return 0;
}
