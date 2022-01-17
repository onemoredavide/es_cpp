#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	
	int d, num, s, i;
	cin>>d;
	s=0;
	num=0;
	for(i=0;i<=d;i+=2){
		num++;
		s+=i;
	}
	cout<<s<<endl<<num<<endl<<d;
	
	return 0;
}
