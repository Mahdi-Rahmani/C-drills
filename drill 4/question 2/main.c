#include <stdio.h>
#include <stdlib.h>

int ways_num(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",ways_num(n));
 	
	return 0;
}
int ways_num(int n)
{
	if(n == 0)
    	return 1;
	else if(n == 1)
  		return 1;
	else
    	return ways_num(n - 1) + ways_num(n - 2);
}
