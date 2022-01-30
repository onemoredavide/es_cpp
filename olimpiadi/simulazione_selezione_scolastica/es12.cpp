#include <iostream>
using namespace std;

#define N 10
int vett[N];
void p () {
    int i;
    for (i=0;i<N;i++)
        vett[i]=i;
    for (i=0;i<N;i++)
        vett[i] = vett[vett[i] % (N-i)];
    

    for (i=0;i<N;i++) {
        cout<<vett[i]<<endl;
    }
}

int main() {
    p();
}