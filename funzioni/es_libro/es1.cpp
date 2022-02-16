#include <iostream>
#include <cstdlib>
using namespace std;

//definire una funzione che ripeta sul video in tre righe diverse la string acquisita da tastiera

void video(string s) {
    cout<<s<<endl<<s<<endl<<s;
}

int main() {
    string s;
    cin>>s;
    video(s);
    return 0;
}