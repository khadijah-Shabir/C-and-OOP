#include<iostream>
using namespace std;
int main() {
	//**********Reference Variables*********
	//Rohan Das-----> Monty------>rashu------>Dangerous Coder------>
	float x=32;
	float & y=x;
	cout<<"Value of x"<<x<<endl;
	cout<<"Value of y"<<y<<endl;
	
	//**********TYpecasting***********
	int a=25;
	float b=30.5;
	cout<<"the value of a is "<<(float)a<<endl;
	cout<<"the value of a is "<< float(a)<<endl;
	cout<<"the value of b is "<<(int)b<<endl;
	cout<<"the value of b is "<<int (b)<<endl;
	int c=int(y);
	
	cout<<"The expression is"<<a+b<<endl;
    cout<<"The expression is"<<a+(int)b<<endl;
	cout<<"The expression is"<<a+int(b)<<endl;
}
