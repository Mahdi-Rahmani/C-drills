#include <stdio.h>
#include <stdlib.h>

void element_get(float a[3][3]);

int main() {
	
	float a[3][3];
	float b[3][3];
	float c[3][3];
	float ans[3][3];
	int z,f,s;
	float det;
	
	for(z=0;z<3;z++)
	{
		for(f=0;f<3;f++)
		{
			ans[z][f]=0;
		}
	}
	element_get(a);
	element_get(b);
	element_get(c);
	det=1/(a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
	for(z=0;z<3;z++)
	{
		s=0;
		while(s<3)
		{
			for(f=0;f<3;f++)
			{
				ans[z][s]+=b[z][f]*c[f][s];
			}
			s++;
		}
	}

	for(z=0;z<3;z++)
	{
		for(f=0;f<3;f++)
		{
			ans[z][f]*=det;
		}
	}
	for(z=0;z<3;z++)
	{
		for(f=0;f<3;f++)
		{
			printf("%.2f ",ans[z][f]);
		}
	}
	return 0;
}
void element_get(float a[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}

}
