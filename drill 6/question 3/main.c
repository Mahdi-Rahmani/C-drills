#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int t_1(int *a,int *b,int step)
{
	int ans;
	a[step+1]=(a[step]+b[step])%7;
	b[step+1]=b[step];
	ans=a[step+1];
	return ans;
}
int t_2(int *a,int *b,int step)
{
	int ans;
	a[step+1]=a[step]+b[step]+1;
	b[step+1]=b[step];
	ans=a[step+1];
	return ans;
}
int t_3(int *a,int *b,int step)
{
	int ans;
	b[step+1]=(a[step]*b[step])%10;
	a[step+1]=a[step];
	ans=b[step+1];
	return ans;
}
int t_4(int *a,int *b,int step)
{
	int ans;
	a[step+1]=a[step];
	b[step+1]=abs(a[step]-b[step]);
	ans=b[step+1];
	return ans;
}
int t_5(int *a,int *b,int step)
{
	int ans;
	a[step+1]=abs(a[step]+b[step]-4)%11;
	b[step+1]=b[step];
	ans=a[step+1];
	return ans;
}
int t_6(int *a,int *b,int step)
{
	int ans;
	b[step+1]=(a[step]*b[step])%10;
	a[step+1]=a[step];
	ans=b[step+1];
	return ans;
}
int main() {
	time_t t=time(NULL);
	srand(t);
	char **name;
	int *a,*b;
	int a_1,b_1;
	int n;
	int i,j;
	int *rand_tas;
	int step=0;
	int (*tass)(int*,int*,int);
	int finish,counter=0;
	scanf("%d",&n);
	scanf("%d %d",&a_1,&b_1);
	// zakhire name
	name = malloc(n * sizeof(char*));
	for(i = 0; i < n; i++)
    	name[i] = malloc(30 * sizeof(char));
    for(i=0;i<n;i++)
    {
    	scanf("%s",&name[i]);
	}
	a = malloc(1 * sizeof(int));
	b = malloc(1 * sizeof(int));
	a[0]=a_1;
	b[0]=b_1;
	
	rand_tas=malloc(1 * sizeof(int));
  	do
	{
		a = realloc(a, sizeof(int) * (step+2));
		b = realloc(b, sizeof(int) * (step+2));
		rand_tas = realloc(rand_tas, sizeof(int) * (step+2));
	  	rand_tas[step]=1+rand()%6;
		switch (rand_tas[step])
		{
			case 1:
				{
					tass=t_1;
					finish=(*tass)(a,b,step);
					step++;
					break;
				}
			case 2:
				{
					tass=t_2;
					finish=(*tass)(a,b,step);
					step++;
					break;
				}
			case 3:
				{
					tass=t_3;
					finish=(*tass)(a,b,step);
					step++;
					break;
				}
			case 4:
				{
					tass=t_4;
					finish=(*tass)(a,b,step);
					step++;
					break;
				}
			case 5:
				{
					tass=t_5;
					finish=(*tass)(a,b,step);
					step++;
					break;
				}	
			case 6:
				{
					tass=t_6;
					finish=(*tass)(a,b,step);
					step++;
					break;
				}
		}
		counter=0;
		for(i=1;i<=finish;i++)
		{
			if(finish%i==0)
				counter++;
		}
	}while(counter!=2);
	// elame barande
	if(step%n==0)
	{
		printf("%s\n",(&name[n-1]));	
	}
	else
	{
		printf("%s\n",(&name[step%n-1]));	
	}
	//neveshtane marahel
	for(i=0;i<step;i++)
	{
		printf("%d - %d %d\n",rand_tas[i],a[i],b[i]);
	}

	return 0;
}
