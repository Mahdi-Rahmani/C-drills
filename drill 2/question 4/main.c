#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int x;
	int y;
	int a;
	int b;
	int counter=0;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&a);
	scanf("%d",&b);
	while(x!=y)
	{
		x+=a;
		y+=b;
		counter++;
	}
	printf("They met in %d after %d jumps and lived happily ever after :)",x,counter);

	
	
	return 0;
}
