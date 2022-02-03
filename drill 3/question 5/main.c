#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	if(n%100==0)
	{
		if(n%400==0)
		{
			printf("True");
		}
		else
			printf("False");
	}
	else
	{
		if(n%4==0)
			printf("True");
		else
			printf("False");

	}
	return 0;
}
