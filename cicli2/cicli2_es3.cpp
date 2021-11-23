#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, q, i = 0;
    do
    {
        cin>>n;
    } while (n <= 10 || n >= 50);

    while (i < 10) {
        q = n*n;
        cout<<q<<endl;
        n++;
        i++;
    }
    return 0;
}