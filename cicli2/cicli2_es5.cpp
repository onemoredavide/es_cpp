#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(NULL));
    
    int n, r, i=0, max=-100, indexMAX;
    
    do {
        cin>>n;
    } while (n >= 100);

    while (i < n) {
        r = rand() % 201 -100;
        if (r > max) { max = r; indexMAX=i; }
        i++;
    }
    cout<<"MAX: "<<max<<" INDEX: "<<indexMAX<<endl;

    return 0;
}
