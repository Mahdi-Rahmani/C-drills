#include <stdio.h>
#include <stdlib.h>

int main() {
	int LEMON,EXTRA_LEMON;
	int APPLE,EXTRA_APPLE;
	int PEAR , EXTRA_PEAR;
	int COMPOTE=0;
	int counter;
	scanf("%d",&LEMON);
	scanf("%d",&APPLE);
	scanf("%d",&PEAR);
	for(counter=1;counter<=LEMON;counter++)
	{
		if(APPLE>=(2*counter) )
		{
			if(PEAR>=(4*counter) )
				COMPOTE++;
		}
	}
	EXTRA_LEMON=LEMON-COMPOTE;
	EXTRA_APPLE=APPLE-2*COMPOTE;
	EXTRA_PEAR=PEAR-4*COMPOTE;
	printf("COMPOTE: %d\n",COMPOTE);
	printf("EXTRA-LEMON: %d\n",EXTRA_LEMON);
	printf("EXTRA-APPLE: %d\n",EXTRA_APPLE);
	printf("EXTRA-PEAR: %d",EXTRA_PEAR);

	return 0;
}
