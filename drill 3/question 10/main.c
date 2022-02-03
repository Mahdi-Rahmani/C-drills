#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	char finish1;
	char finish2;
	int j=0;
	int min=0,max=1000000;
	int mid=500000;
	int ran;
	time_t t=time(NULL);
	srand(t);
	ran=rand()%1000000;
	printf("%d\n",ran);
	scanf("%c",&finish1);
	scanf("%c",&finish2);
	while(finish1!='E'&&finish2!='Q')
	{
		if(finish1=='H')
		{
			min=ran;
			mid=(max-min)/2;
			ran=min+mid+rand()/(max-min);
			printf("%d\n",ran);
			scanf("%c",&finish1);
			scanf("%c",&finish2);

		}
		else
		{
			max=ran;
			mid=(max-min)/2;
			ran=min+mid+rand()/(max-min);
			printf("%d\n",ran);
			scanf("%c",&finish1);
			scanf("%c",&finish2);
		}
			
	}
 	 			

	
	return 0;
}
