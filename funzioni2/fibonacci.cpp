#include <iostream>
#include <cstdlib>
using namespace std;

int fibonacci(){
	int x,y,z,i=3;
	x=1;
	y=1;
	z=x+y;
	cout<<x<<" "<<y<<" "<<z<<" ";
	while (i<30){
		x=y;
		y=z;
		z=x+y;
		cout<<z<<" ";
		i++;
	}
	return z;
}

int main(){
	/* calcolare il trentesimo numero nella sequenza di fibonacci */
	fibonacci();
	return 0;
}
