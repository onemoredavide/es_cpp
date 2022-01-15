#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    //https://training.olinfo.it/#/task/ois_stocks/statement
    int n, vi, i, sum=0;
    bool si, decr=0;

    vector<int> v;
    vector<bool> s;

    do{
        cin>>n;
    } while(n<0||n>1000000);

    for (int i=0; i<n; i++){
        cin>>vi;
        v.push_back(vi);
    }
    for (int i=0; i<n; i++){
        cin>>si;
        s.push_back(si);
    }

    //int seq[] = {1, 2, 3};   
    return 0;
}