#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str[100000];
	long long i,j=0,f=0,z;
		long long size1, size2,rest=0;
	gets(str);
	char change[100000];
	gets(change);
	long long size3=strlen(str);
	char alternative[100000];
	gets(alternative);
	size1=strlen(change);
	char new_str[100000],new_str2[100000];
	size2=strlen(alternative);
	char *ptr=strstr(str,change);

	do{
		rest=0,j=0,i=0;
		for(i=str;i<ptr;i++)
		{
			new_str[j]=str[j];
			j++;
			rest++;
		}
		if(ptr!=NULL)
		{
			for(z=0;z<size2;z++)
			{
				new_str[j]=alternative[z];
				j++;
			}
			rest+=size1;	
		}
		for(z=rest; ;z++)
		{
			if(str[z]=='\0')
				break;
			new_str[j]=str[z];
			j++;
		}
		new_str[j]='\0';
		f=strlen(new_str);
		for(i=0;i<f;i++)
		{
			str[i]=new_str[i];
		}
		str[i]='\0';

		char *ptr2=strstr(str,change);
		ptr=ptr2;

		
	}while(ptr!=NULL);
	
		printf("%s\n",new_str);
	

	return 0;
}
