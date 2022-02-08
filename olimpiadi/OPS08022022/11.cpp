#include<cstdlib>
#include<iostream>
using namespace std;

int main (){
	
	int a,b,l,i;
	string parole,p1,p2,p3;
	parole="sole cuore amore";
	a=1;
	b=1;
	l=parole:length();
	for(i=1;i<=l;i++){
		if(a==1){
			a=i;
		} else {
			b=i;
		}
	}
	p1=parole[0:a-1]
}


