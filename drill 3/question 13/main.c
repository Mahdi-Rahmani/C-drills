#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n;
	int h=0,c=0,x=0;
	int i,counter=0;
	scanf("%d",&n);
	char saf[n];
	char entry;
	for(i=0;i<n;i++)
	{
		scanf(" %c",&entry);
		switch(entry)
		{
			case 'H': h++;
					saf[i]='H';
					break;
						
			case 'C': c++;
					saf[i]='C';
					break;							
		}
	}
	i=0;
	x=1;
	while(x!=0)
	{
		x=0;
		for(i=0;i<n;i++)
		{
			if(saf[i]=='H')
			{
				x++;
			}
		}
		i=0;
		while(i!=n&&x!=0)
		{
			if(saf[i]=='C')
			{
				i++;
				if(saf[i]=='H')
				{
					saf[i]='C';
				}
				else
					i--;
			}
			i++;
		}
		if(x!=0)
		{
			counter++;
		}
	}
	printf("%d",counter);
	return 0;
}
