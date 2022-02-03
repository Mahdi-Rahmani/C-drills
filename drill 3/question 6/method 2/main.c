#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long int n;
	scanf("%ld",&n);
//	while(n>100000)
//	{
//	scanf("%ld",&n);
//	}
	if(n<1211)
	{
		printf("220-284");
	}
	else
	{
		if(n<2925&&n>284)
		{
			printf("220-284\n");
			printf("1184-1210");
		}
		else
		{
			if(n<5565&&n>284)
			{
				printf("220-284\n");
				printf("1184-1210\n");
				printf("2620-2924");		
			}
			else
			{
				if(n<6369&&n>284)
				{
					printf("220-284\n");
					printf("1184-1210\n");
					printf("2620-2924\n");
					printf("5020-5564");
				}
				else
				{
					if(n<10857&&n>284)
					{
						printf("220-284\n");
						printf("1184-1210\n");
						printf("2620-2924\n");
						printf("5020-5564\n");
						printf("6232-6368");
					}
					else
					{
						if(n<14596&&n>284)
						{
							printf("220-284\n");
							printf("1184-1210\n");
							printf("2620-2924\n");
							printf("5020-5564\n");
							printf("6232-6368\n");
							printf("10744-10856");
						}
						else
						{
							if(n<18417&&n>284)
							{
								printf("220-284\n");
								printf("1184-1210\n");
								printf("2620-2924\n");
								printf("5020-5564\n");
								printf("6232-6368\n");
								printf("10744-10856\n");
								printf("12285-14595");
							}
							else
							{
								if(n<76085&&n>284)
								{
									printf("220-284\n");
									printf("1184-1210\n");
									printf("2620-2924\n");
									printf("5020-5564\n");
									printf("6232-6368\n");
									printf("10744-10856\n");
									printf("12285-14595\n");
									printf("17296-18416");
								}
								else
								{
									if(n<88731&&n>284)
									{
										printf("220-284\n");
										printf("1184-1210\n");
										printf("2620-2924\n");
										printf("5020-5564\n");
										printf("6232-6368\n");
										printf("10744-10856\n");
										printf("12285-14595\n");
										printf("17296-18416\n");
										printf("63020-76084");
									}
									else
									{
										if(n<=100000&&n>284)
										{
											printf("220-284\n");
											printf("1184-1210\n");
											printf("2620-2924\n");
											printf("5020-5564\n");
											printf("6232-6368\n");
											printf("10744-10856\n");
											printf("12285-14595\n");
											printf("17296-18416\n");
											printf("63020-76084\n");
											printf("79750-88730");

										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
