#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *fun(char *str_ref)
{
	str_ref++;
    return str_ref;
}

int main()
{
    char *str = malloc(100*sizeof(char));
    strcpy(str, "AUTprincipalprogramming");
    str=fun(str);
    puts(str);

    return 0;
}
