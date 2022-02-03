#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int number;
	int count0=0;
	int num_length=0;
	int copy_num;
	int residue;
	int inv_num=0;
	int copy_invnum;
	int new_num=0;
	int counter=0;
	int i=0;
	//yek halghe baraye chek kardane tedade arghame adade vared shode
	while(num_length!=5)
	{
		num_length=0;
		scanf("%d",&number);
		copy_num=number;
		while(copy_num!=0)
		{
			copy_num/=10;
			num_length++;
		}
		
	}
	copy_num=number;
	//yek halghe baraye joda kardane adad va ezafe kardane yekvahed be har kodam
	while(copy_num!=0)
	{
		residue=copy_num%10;
		residue++;
		copy_num/=10;
		if(residue>9)
		{
			
			new_num+=(residue-10)*pow(10,i);
			copy_num+=residue/10;
		}
		else
		{
			if(i<5)
				new_num+=residue*pow(10,i);	
			else
				new_num+=(residue-1)*pow(10,i);	
			
		}
	i++;		
	}
	copy_num=new_num;
	num_length=0;
	//yek halghe baraye be dast avardane tedade arghame adad pas az ezafe kardane 1 be har ragham
	while(copy_num!=0)
	{
		copy_num/=10;
		num_length++;
	}
	i=num_length;
	copy_num=new_num;
	//makus kardane adad
	while(copy_num!=0)
	{
		residue=copy_num%10;
		inv_num+=residue*pow(10,i-1);
		copy_num/=10;
		i--;
	}
	if(num_length==5)
	{
		inv_num*=10;
	}	
	printf("%.6d",inv_num);
	
	return 0;
}
