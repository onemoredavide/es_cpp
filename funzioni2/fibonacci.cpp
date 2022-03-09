#include <iostream>
#include <cstdlib>
using namespace std;

int fibonacci(){
	int x,y,z,i=0;
	x=1;
	y=1;
	z=x+y;
	while (i<30){
		x=y;
		y=z;
		z=x+y;
		i++;
	}
	return z;
}

int main(){
	/* calcolare il trentesimo numero nella sequenza di fibonacci */
	cout<<fibonacci();
	return 0;
}
