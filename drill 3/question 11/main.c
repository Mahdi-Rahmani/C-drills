#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;

	int u=0,d=0,r=0,l=0;
	int i;
	scanf("%d",&n);
	char entry;
	char enter;

	for(i=0;i<n;i++)
	{
		scanf(" %c",&entry);
		switch(entry)
		{
			case 'U': u++;
					break;
						
			case 'D': d++;
					break;
					
			case 'R': r++;
					break;
					
			case 'L': l++;
					break;
					
		}

	}
	if(u==d&&l==r)
	{
		printf("YES");
	}
	else
	{
		printf("y axis and x axis distances are : %d %d",abs(u-d),abs(r-l));
	}
	return 0;
}
