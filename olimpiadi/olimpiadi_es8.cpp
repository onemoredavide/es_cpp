#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	
	int a, b,c,delta,imp,ind,radd,x1,x2,d=-1;
	cin>>a>>b>>c;
	imp=0;ind=0;x1=0;x2=0;
	
	if(a==0){
		if(b==0){
			if(c==0){
				ind=1;
			}else{
				imp=1;
			}
		}else{
			x1=(c*-1)/b;
			x2=x1;
		}
	} else {
		delta=pow(b,2)-(4*a*c);
		if(delta<0){
			imp=1;
		}else{
			radd=sqrt(delta);
			x1=(((b*-1)-radd)/(2*a));
			x2=(((b*-1)+radd)/(2*a));
		}
	}
	
	cout<<imp<<endl<<ind<<endl<<x1<<endl<<x2;

	return 0;
}
