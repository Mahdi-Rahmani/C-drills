#include <stdio.h>
#include <stdlib.h>

	
	int main( ) {

int a = 0, b;

int i, j, k, l;

char x;

double c, d;

a -= -5 - 5;

b = -3 - - ( - 3 ) ;

c = a + 7;

d = b + 4.0;

x = a + b + 65;

i = j = k = l = 1;

i *= (k += (2 * (l -= (3 / j--))));

printf ( "c_int = %d,c_double = %lf, c = %lf\n", (int)c, c, a + 7) ;

printf ( "d_int = %d,d_double = %lf, d = %lf\n", (int)d, d, b + 4.0) ;

printf ( "x = %c\n", x) ;

printf ( "i = %d, j = %d, k =%d, l = %d\n", i, j, k, l);

return 0;

}
	

