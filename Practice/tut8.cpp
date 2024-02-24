#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a=30;
    // char c='d';
    // cout<<"Value of a was "<<a<<endl;
    // cout<<"Value of c was "<<c<<endl;

    // a=45;
    // c='4';
    // cout<<"value of a is "<<a<<endl;
    // cout<<"Value of c is "<<c;

    //***********************use of constant(connst keyword)

    const int a=30;
    const char c='d';
    cout<<"Value of a was "<<a<<endl;
    cout<<"Value of c was "<<c<<endl;

    // a=45;
    // c='4';
    // cout<<"value of a is "<<a<<endl;
    // cout<<"Value of c is "<<c<<endl;  //it will generate an error bcz we can't reassign values.


    //************************Manipulators(endl,setw  )**********************

//help in formatting of your code
//add iomanip to use setw
//setw helps in setting fieldwidth

cout<<"We are learning setw manipulator"<<endl;
int x=20, y=30, z=40;
cout<<"The value of x is "<<x<<endl;
cout<<"The value of y is "<<y<<endl;
cout<<"The value of z is "<<z<<endl;

cout<<"The value of x is "<<setw(4)<<x<<endl;
cout<<"The value of y is "<<setw(4)<<y<<endl;
cout<<"The value of z is "<<setw(4)<<z<<endl;


//***********************Operator precedance and associativity****************************
//Operator precedance ...upr se neechy ..jo top pe opeartor h us ki prcedance zyada h
// associativity.....left to right ya right to left aik hi row main 

cout<<endl;
cout<<"We are learning operator precedance"<<endl;
int r=5;
int g=6;

int f=(a*5)+g;

int d=(a*45)+b-34+67;


}