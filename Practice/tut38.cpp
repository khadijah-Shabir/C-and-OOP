//In This codesnippet...concept of single inheritance is explained. Please note that you are decalring menthods outseide the class.
//You have a base class and a derived class.

#include<iostream>
using namespace std;

//Making a Base class
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
//DEclaring Methods outside Base calss

void Base::setData(void){
	data1=10;
	data2=20;	
}

int Base::getData1(){
	return data1;
}
int Base::getData2(){
	return data2;
}
//Making a Derived Class
class Derived:public Base{
	public:
	int data3;
    void process();
	void display();	
};
//DEclaring Methods outside Derived class

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;//data1 can't be directly accessed as it is a private data member of base class
    cout << "Value of data 2 is " << data2 << endl;//dat 2 and 3 can be directly accessed .	                                                
    cout << "Value of data 3 is " << data3 << endl;//data3 is the data member of DErived class and Data2 ia a public data member of base calss
}

//Main Function
int main(){
Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;	
}

