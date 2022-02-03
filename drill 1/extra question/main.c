#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int counter_repetitive_digit;
	int answer;
	int divisor_counter=0;
	int copy_num;
	int residue;
	int counter1;
	int counter2;
	int num=0;
	int digit[10]={};
	
	printf("please enter n:\n");
	scanf("%d",&n);
	for(counter1=0;counter1<n;counter1++)
		num=num+9*pow(10,counter1);
	

	for(counter1=1;counter1<=num;counter1++)
	{
		for(counter2=0;counter2<10;counter2++)
			digit[counter2]=0;
		counter_repetitive_digit=0;
		copy_num=counter1;
		while(copy_num!=0)
		{
			residue=copy_num%10;
			for(counter2=0;counter2<10;counter2++)
			{
				if(residue==counter2)
				{
					digit[counter2]=digit[counter2]+1;
					if(digit[counter2]>1)
					{
						
						counter_repetitive_digit++;
					}
						
				}
			}
			copy_num=copy_num/10;
		}
		
		
		if(counter_repetitive_digit==0)
		{
		divisor_counter=0;
			for(counter2=1;counter2<=counter1;counter2++)
			{
				if(counter1%counter2==0)
				divisor_counter++;
			}
			if(divisor_counter==2)
			{
				answer=counter1;

			}
		}
}
	printf("answer is:\n%d",answer);
	
	return 0;


}
