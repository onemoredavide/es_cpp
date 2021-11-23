#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, i=0, s=0;

    do {
        cin>>n;
    } while (n < 0);

    while (i < n) {
        s += i + 1;
        i++;
    }
    cout<<"SOMMA: "<<s<<endl;

    return 0;
}