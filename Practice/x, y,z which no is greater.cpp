#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"entre numbers"<<endl;
	cin>>x>>y>>z;
	if(x<y && x<z){
		cout<<"x is smaller "<<x<<endl;
	}
	else if(y<x && y<z){
		cout<<"y is smaller "<<y<<endl;
	}
	else {
		cout<<"z is smaller "<<z<<endl;
	}
	return 0;
}
