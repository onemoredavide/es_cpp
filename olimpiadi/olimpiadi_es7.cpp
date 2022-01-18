#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	int an1, an2, an3, o, r, a, max;
	cin>>an1>>an2>>an3;
	o=0;
	r=0;
	a=0;
	max=an1;
	if(an2>max){
		max=an2;
	}
	if(an3>max){
		max=an3;
	}
	if(max>90){
		o=1;
	}else{
		if(max==90){
			r=1;
		} else{
			a=1;
		}
	}
	cout<<"MAX: "<<max<<endl<<"O: "<<o<<endl<<"R: "<<r<<endl<<"A: "<<a<<endl;
	
	return 0;
}
