#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int prodotto(int a, int b) {
    int i=1,p=a;
    while(i<b) {
        a+=p;
        i++;
    }
    return a;
}

int main() {
    srand(time(NULL));
    int a,b,c;
    a=rand()%10+1;
    b=rand()%10+1;
    c=rand()%10+1;
    prodotto(prodotto(a,b),c);
    return 0;
}