#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int copy;
	int residue;
	int sum=0;
	printf("numbers that have mentioned conditions in the question:\n");
	for(number=2; ;number++)//baraye barresie hame adad
	{
		copy=number;
		while(copy!=0)//baraye joda kardane argham va resandane an ha be tavane 4
		{
			residue=copy%10;
			sum=sum+pow(residue,5);
			copy=copy/10;
		}
		if(sum==number)
			printf("%d\n",number);
			
		sum=0;
	}
	return 0;
}
