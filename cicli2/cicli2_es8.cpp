#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, i=0, cd=0;
    bool primo;

    cin>>n;

    
    n = abs(n); // n = | n |
    

    while (i <= n) {
        if (n % i == 0) {
            cd++;
        }
        i++;
    }
    primo = cd == 2;

    return 0;
}
