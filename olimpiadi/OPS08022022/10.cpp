	#include<cstdlib>
#include<iostream>
using namespace std;

int main (){
	
	int n;
	string parola="Accatastare", lett="t", l;
	l=parola[0];
	n=0;
	while (l!=lett) {
		n++;
		l=parola[n];
	}
	cout<<n;
}


