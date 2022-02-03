#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a , b ,r ,q;
	float m,c;
	float Z, X;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%f",&c);
	scanf("%d",&r);
	scanf("%f",&m);
	scanf("%d",&q);
	Z=(8.8*(a+b)*2/c-0.5+2*a/(q+r))/((a+b)*(1/m));
	X=(-b+(b*b)+2.4*a*c)/(2*a);
	
	printf("Result for %cZ%c is %.2f\n",34,34,Z);
	printf("Result for %cX%c is %.3f",34,34,X);
	return 0;
}
