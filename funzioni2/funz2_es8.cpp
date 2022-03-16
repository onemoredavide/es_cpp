#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int input() {
    int x;
    do{
        cout<<"Inserisci un numero di massimo 5 cifre: "<<endl;
        cin>>x;
    } while(to_string(x).length() > 5);
    return x;
}

string leggi(int x) {
    string s = to_string(x);
    string n="";
    for(int i=0;i<=s.length();i++) {
        n+=s[s.length()-i];
    }
    return n;
}

int main() {
    int a=input();
    cout<<leggi(a);
    return 0;
}