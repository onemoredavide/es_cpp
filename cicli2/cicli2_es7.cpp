#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, i=1;
    do
    {
        cin>>n;
    } while (n < 1);

    while (i <= n) {
        if (n % i == 0) { cout<<i<<endl; }
        i++;
    }
    
    return 0;
}