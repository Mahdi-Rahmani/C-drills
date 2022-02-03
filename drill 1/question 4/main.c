#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int counter=0;
	printf("please enter a number:\n");
	scanf("%d",&number);
	while(number!=0)
	{
		if(number%2==0)
		{
			number=number/2;
			counter++;
		}
		else
		{
			number--;
			counter++;
		}
	}
	printf("the number of using calculator:\n%d",counter);
	
	return 0;
}
