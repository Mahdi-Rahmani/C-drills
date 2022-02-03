#include <stdio.h>
//check (int m);
main() {
    int k = 35, z;
    z = check (k);
    printf ("\n%d", z);
}

check (int m ) {
    
    if (m > 40)
        return (1);
    else
        return (0);
}
