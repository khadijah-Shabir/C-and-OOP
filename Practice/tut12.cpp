#include<iostream>
using namespace std;
int main(){
	//What is a pointer?
	//A datatype to hold the adress of other datatypes
	
	int a=3;
	int* b=&a;
	cout<<"the adress of b is"<<b<<endl;
	cout<<"the adress of a is"<<&a<<endl;
	cout<<"the value of a at address of a is"<<*b<<endl;
	
	// &= adress operator...to get the adress of variable
	//*= value operator or dereference operator...the get the value of variable whose adress was stored in pointer
	
	//pointer to pointer
	//here c is strong the adress of the pointer b which we made earlier
	int** c = &b;
	cout<<"getting the concept of pointer tio pinter"<<endl;
	
	cout<<"the adress of b is "<<&b<<endl;
	cout<<"the adress of b is"<<c<<endl;
	cout<<"The value at adress c is "<<*c<<endl;
	cout<<"The value at adress value at (value at(c)" <<**c<<endl;
	
	
	
	
	
	return 0;
}
