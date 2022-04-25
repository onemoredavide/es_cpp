#include <cstdlib>
#include <iostream>
using namespace std;
int input(){
	int x;
	do{
		cout<<"inserisci un valore: "<<endl;
		cin>>x;
	}while(x<0);
	return x;
}
bool primo(int n){
	int cd=0,i=1;
    while(i<=n) {
        if(n%i==0) 
            cd++;
        i++;
    }
    if(cd>2)
        return false;
    return true;
}
int main(){
	int a;
	a=input();
	bool b=primo(a);
    cout<<b;
	return 0;
}