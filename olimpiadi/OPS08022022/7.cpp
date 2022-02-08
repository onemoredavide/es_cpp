#include<cstdlib>
#include<iostream>
using namespace std;

int main (){
	
	int d1=19,d2=5,q,r;
	q=0;
	r=d1;
	while (r>=d2) {
		r-=d2;
		q++;
	}
	cout<<q<<endl<<r<<endl;
}


