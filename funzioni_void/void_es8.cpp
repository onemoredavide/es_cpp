#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void calcola(int n, int &s) {
    int i=0,val;
    while(i<n) {
        val=rand()% 100+1; // range: 1-100
        s+=val;
        i++;
    }
}

int main() {
    srand(time(NULL));
    int x=10,s=0; // x numero generico
    calcola(x,s);
    cout<<x;
    return 0;
}