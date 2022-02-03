#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int l=-1,m=499999,h=1000000;
	char finish1;
	char finish2;
	int i;
	
	printf("%d\n",m);
	scanf("%c",&finish1);
	scanf("%c",&finish2);
	while(finish1!='E'&&finish2!='Q')
	{
		if(finish1=='H')
		{
			l=m;
			m+=(h-l)/2;
			printf("%d\n",m);
			scanf("%c",&finish1);
			scanf("%c",&finish2);
		}
		else
		{
			h=m;
			m-=(h-l)/2;
			printf("%d\n",m);
			scanf("%c",&finish1);
			scanf("%c",&finish2);
		}
	}
	return 0;
}
