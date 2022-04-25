#include <cstdlib>
#include <stdio.h>
#include <iostream>

int f(int n) {
    int k;
    k=2;
    while ((k*k <= n) && (n % k != 0))
        k = k+1;
        if (k*k > n) return 1; else return 0;
}

int main() {
    
    return 0;
}