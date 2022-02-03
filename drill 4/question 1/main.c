#include <stdio.h>

void print1() {
    int i = 0;
    i++;
    if (i <= 1) {
        printf ("C adds wings to your thoughts\n"); 
        return;
        print1();
    }
}

void print2() {
    static int i = 0;
    i++;
    if (i <= 5) { 
        printf ("%d\n", i); 
        print2();
    }
    else 
        return;
}

void junk (int a, char c) {
    a = a * a;
    c += 1;
    printf("%d %c\n", a, c);
}

void main(){
    int i = 5;
    char c = 'r';
    junk (i, c);
    printf ("%d %c\n", i, c);
    print1();
    print2();
    print1();
}
