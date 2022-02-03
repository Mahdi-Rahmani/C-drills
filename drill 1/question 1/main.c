#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int plaque;
	int remnant;
	int rem0_counter=0;
	int num_length=0;
	int copy_plaque;
	int counter_0;

	// aval yek for baraye check kardane adade 1 ta 999 minevisim o baghie marahel dakhele for anjam mishe
	for(plaque=1;plaque<1000;plaque++)
	{
		copy_plaque=plaque;// az i yek copy tahaie mikonim
		//halghe baraye check kardane inke adade ma 0 nadashte bashe
		while(copy_plaque!=0)
		{
			remnant=copy_plaque%10;
			if(remnant==0)
				counter_0++;
			copy_plaque=copy_plaque/10;
			
		}
		if(counter_0==0)//darvaghe mige age tedade 0 ha 0 bud boro dastoore bad
		{
			copy_plaque=plaque;
			while(copy_plaque!=0)//hlghe baraye inke dune dune argham ro joda kone va hamzaman check kone bebine ke aya adade ma bar arghamash bakhsh pazir hast ya kheir
			{
			
				remnant=copy_plaque%10;
				if(plaque%remnant==0)
				{
					rem0_counter++;//dare tedad raghamhaee az adad ke adade ma bar oon bakhsh pazire ro chek mikone
				}
				
				copy_plaque=copy_plaque/10;
				num_length++;// dare tedade argham ro check mikone
			}
		}
		
		if(rem0_counter==num_length)
		{
			if(rem0_counter!=0)
			printf("%d\n",plaque);
		}
		rem0_counter=0;
		num_length=0;
		counter_0=0;
	}

	return 0;
}
