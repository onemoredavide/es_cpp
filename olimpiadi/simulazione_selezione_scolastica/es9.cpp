#include <stdio.h>

int vett[10];

void scambia(int *a,int *b) {
    int c;
    c=*a; *a=*b; *b=c;
}

int main() {
    int i;
    for (i=0;i<10;i++)
        vett[i]=i;
    for (i=9;i>=0;i--)
        scambia(&vett[i],&vett[i%3]);
    for (i=0;i<10;i++)
        printf("%d ",vett[i]);
    return 0;
}