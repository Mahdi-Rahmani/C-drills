#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int weight;
	double height;
	double BMI;
	scanf("%d",&weight);
	scanf("%lf",&height);
	BMI=weight/(height*height);
	printf("%.2lf",BMI);
	
	
	return 0;
}
