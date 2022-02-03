#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <string.h>
#include <math.h>
int main()
{
	char hex_num[40];
	int length;
	int sum=0;
	char ch_1,ch_2,ch_3;
	int i;
	int copy;
	int j=1;
	scanf("%s",&hex_num);
	length=strlen(hex_num);
	while(j!=0)// braye chek kardan inke aya adad dar mahdude mored nazar hast ya na
	{
		for(i=0;i<length;i++)//barrsi kardan har char be surate joda
		{
			if(isdigit(hex_num[i])==0)	
			{
				switch (hex_num[i])
				{
					default: scanf("%s",&hex_num);
						length=strlen(hex_num);
						i=0;
						break;
					case 'a':
					case 'A':sum+=10*pow(16,length-i-1);
						break;
					case 'b':
					case 'B':sum+=11*pow(16,length-i-1);
						break;
					case 'c':
					case 'C':sum+=12*pow(16,length-i-1);
						break;
					case 'd':
					case 'D':sum+=13*pow(16,length-i-1);
						break;
					case 'e':
					case 'E':sum+=14*pow(16,length-i-1);
						break;
					case 'f':
					case 'F':sum+=15*pow(16,length-i-1);
						break;
				}
			
			}
			else
			{
				sum+=((int)hex_num[i]-48)*pow(16,length-i-1);
			}
		}
		
		if(sum<703 || sum>17575)
		{
			scanf("%s",&hex_num);
			length=strlen(hex_num);
			sum=0;
		}
		else 
			j=0;
		
	}
	copy=sum-703;
	ch_1=65+copy/(26*26);
	ch_2=65+(copy-(ch_1-65)*26*26)/26;
	ch_3=65+(copy-(ch_1-65)*26*26-(ch_2-65)*26);

//	printf("%d %d\n",sum,length);
	printf("%c%c%c",ch_1,ch_2,ch_3);
	
	return 0;
}
