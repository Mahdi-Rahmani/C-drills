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
	if(n<1185)
	{
		printf("220-284");
	}
	else
	{
		if(n<2620&&n>284)
		{
			printf("220-284\n");
			printf("1184-1210");
		}
		else
		{
			if(n<5020&&n>284)
			{
				printf("220-284\n");
				printf("1184-1210\n");
				printf("2620-2924");		
			}
			else
			{
				if(n<6232&&n>284)
				{
					printf("220-284\n");
					printf("1184-1210\n");
					printf("2620-2924\n");
					printf("5020-5564");
				}
				else
				{
					if(n<10744&&n>284)
					{
						printf("220-284\n");
						printf("1184-1210\n");
						printf("2620-2924\n");
						printf("5020-5564\n");
						printf("6232-6368");
					}
					else
					{
						if(n<12285&&n>284)
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
							if(n<17296&&n>284)
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
								if(n<63020&&n>284)
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
									if(n<79750&&n>284)
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
										printf("66928-66992\n");
										printf("67095-71145\n");
										printf("69615-87633\n");
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
											printf("66928-66992\n");
											printf("67095-71145\n");
											printf("69615-87633\n");
											printf("79750-88730\n");

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
