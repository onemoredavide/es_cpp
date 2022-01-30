#include <stdio.h>
int i,c;
main() {
    c=0; i=0;
    while (i<100) {
        c++;
        if (c % 2 != 0)
            i++;
        else
            i--;
    }
    printf("c=%d\n",c);
}