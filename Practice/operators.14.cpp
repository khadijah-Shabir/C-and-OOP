#include <iostream>
using namespace std;
int main(){
	int a=4,b=5;
	cout<<"Operators in C++"<<endl;
	cout<<"Following are the types of operators in C++"<<endl;
	//Arithmetic Operators
	cout<<"The value of a+b is "<<a+b<<endl;
	cout<<"The value of a-b is "<<a-b<<endl;
	cout<<"The value of a*b is "<<a*b<<endl;
	cout<<"The value of a/b is "<<a/b<<endl;
	//output of two integers is an integer. .8 will be ignored and we we will get 0 as an answer which is an integer.
	cout<<"The value of a%b is "<<a%b<<endl;
	cout<<"The value of a++ is "<<a++<<endl;
	cout<<"The value of a-- is "<<a--<<endl;
	cout<<"The value of ++a is "<<++a<<endl;
	cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    
    //Follwing are the assignment operators----used to assign values to variables
   // int a=3,b=9;
  //char c='d'; 
  
   cout<<"Comparison Operators";
   cout<<"Following are the comparison operators in C++"<<endl;
   cout<<"The value of a==b is "<<(a==b)<<endl;
   cout<<"The value of a>b is "<<(a>b)<<endl;
   cout<<"The value of a<b is "<<(a<b)<<endl;
   cout<<"The value of a>=b is "<<(a>=b)<<endl;
   cout<<"The value of a<=b is "<<(a<=b)<<endl;
   cout<<"The value of a!=b is "<<(a!=b)<<endl;
   cout<<endl;
   
   cout<<"Logical Operators";
   cout<<"Following are the Logical operators in C++"<<endl;
   cout<<"Value of this logical operator((a==b) &&(a<=b)) is"<<((a==b) &&(a<=b))<<endl;
   cout<<"Value of this logical operator((a==b) ||(a<=b)) is"<<((a==b)||(a<=b))<<endl;
   cout<<"Value of this logical operator(!(a==b)) is"<<(!(a==b))<<endl;
     
    
}
