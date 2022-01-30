#include <stdio.h>
int f (int i) {
    if (i<=1)
        return(i);
    else if (i%2==0)
        return(-i*f(i-1));
    else
        return(i*f(i-1)); }
int main() {
    printf("num = %d",f(7));
}