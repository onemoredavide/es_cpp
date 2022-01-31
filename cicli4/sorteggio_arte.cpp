#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

bool isValid(int ser, vector<int> vec) {
	vector<int>::iterator it=find (vec.begin(), vec.end(), ser);
	if (it != vec.end())
		return false;
	else
		return true;
}

int main(){
	srand(time(NULL));
	int a[4], b[4], c[4], d[4], e[2];
	vector<int> vec { 13, 16 };
	cout<<"09/02 --> ";
	for (int i=0;i<4;i++)
	{	
		do{
			a[i]=rand()%22+1;
		} while (!isValid(a[i],vec));
		vec.push_back(a[i]);
		cout<<a[i]<<" ";
	}
	cout<<endl<<"-------------------------"<<endl;
	cout<<"23/02 --> ";
	for (int i=0;i<4;i++)
	{
		do{
			b[i]=rand()%22+1;
		} while (!isValid(b[i],vec));
		vec.push_back(b[i]);
		cout<<b[i]<<" ";
	}
	cout<<endl<<"-------------------------"<<endl;
	cout<<"09/03 --> ";
	for (int i=0;i<4;i++)
	{
		do{
			c[i]=rand()%22+1;
		} while (!isValid(c[i],vec));
		vec.push_back(c[i]);
		cout<<c[i]<<" ";
	}
	cout<<endl<<"-------------------------"<<endl;
	cout<<"23/03 --> ";
	for (int i=0;i<4;i++)
	{
		do{
			d[i]=rand()%22+1;
		} while (!isValid(d[i],vec));
		vec.push_back(d[i]);
		cout<<d[i]<<" ";
	}
	cout<<endl<<"-------------------------"<<endl;
	cout<<"06/04 --> ";
	for (int i=0;i<4;i++)
	{
		do{
			e[i]=rand()%22+1;
		} while (!isValid(e[i],vec));
		vec.push_back(e[i]);
		cout<<e[i]<<" ";
	}
	return 0;
}

