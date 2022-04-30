#include <iostream>
using namespace std;

int input() {
    int n;
    cin>>n;
    return n;
}

int euclide(int n,int d)
{
	int r;
	n=abs(n);
    d=abs(d);
    if (d>n)          
    swap(d,n);
	while(d>0)             
    {
      r= n%d;   
      n = d;            
      d = r;
    }   
	return n;      	
	
}

int mcd (int n,int d) {
    int mcd=n;
    while(n%mcd!=0||d%mcd!=0)
        mcd--;
    return mcd;
}

int main() {
    int n=input();
    int d=input();
    cout<<euclide(n,d)<<endl;
    cout<<mcd(n,d);
}