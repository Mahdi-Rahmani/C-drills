#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int counter1;
	int counter2;
	int answer=0;
	int sum=0;
	printf("please enter a number:\n");
	scanf("%d",&number);
	for(counter1=1;counter1<number;counter1++)//hame adade kuchektar az n ra barresi konad
	{
		for(counter2=1;counter2<=counter1;counter2++)// mikhahim majmoo e maghsum elaih haye i ra biabim pas ebteda bayad maghsum elaih ha ro be dast avarim.
		{
			if(counter1%counter2==0)
			{
				sum=sum+counter2;
			}
		}
		if(sum>number)
			answer++;
		sum=0;		
	}
	printf("number of answers that have mentioned conditions in the question:\n%d",answer);
	return 0;
}
