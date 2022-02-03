#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int copy_num;
	int num_length=0;//tedad argham
	int inv_num;
	int inv_num_new=0;
	int residue;
	int counter;
	int counter_6=0;
	
	printf("please enter a number only with 9 and 6:\n");
	scanf("%d",&number);
	copy_num=number;
	while(copy_num!=0)
	{
		residue=copy_num%10;
		if(residue==6 || residue==9)
		{
			copy_num=copy_num/10;
		}
		else
		{
			printf("invalid number. try again\n");
			scanf("%d",&number);
			copy_num=number;
			
		}
	
	}
	copy_num=number;
	while(copy_num!=0)//tedade argham moshakhas shavad
	{
		copy_num=copy_num/10;
		num_length++;
	}
	copy_num=number;
	for( counter=num_length-1;counter>=0;counter--)//adad ra barax kone
	{
	
		residue=copy_num%10;
		inv_num=inv_num+residue*pow(10,counter);
		copy_num=copy_num/10;
	}


	copy_num=inv_num;
	residue=0;
	for(counter=num_length-1;counter>=0;counter--)//adad ra be sharaiete soal tabdil konad va dobare barax konad
	{
		residue=copy_num%10;
		if(counter_6<1)
		{
			if(residue==6)
			{
				inv_num_new=inv_num_new+9*pow(10,counter);
				counter_6++;
			}
			else
			inv_num_new=inv_num_new+residue*pow(10,counter);
		}
		else
		{
			inv_num_new=inv_num_new+residue*pow(10,counter);
		}
		copy_num=copy_num/10;
	}
	printf("number with applied conditions:\n %d",inv_num_new);
	return 0;
}
