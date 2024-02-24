#include<iostream>
using namespace std;

//We are learning Inheritance Syntax & Visibility Mode in C++ | C++ Tutorials for Beginners #37

//Inheritance....Reuasabality is very important
//reusablity saves time and memory
//DRY ..do no repeat yourself


//Dervied class syntax

//class {{derived class name}}:{{ Visibility mode}} {{base class name}}


class Employee{	
	
public:
	int id;
	float salary;
	Employee(int inpid){
		id=inpid;
		salary=34.0;
	}
	Employee(){
	}
};

//Notes

//1--by default visiblility mode is private
//2--Private visibilty mode means public members of the base class becomes private member of the derived class
//3--Public visibility mode means public members of the base class becomes public members of the derived class
//4-- Private memers of base class can never be inherited. we are only working to inherit the derive class

//Creating a derived class "programmer " from base calss "Employee"
class programmer : public Employee{
	public:
	int languagecode=9;
	programmer(int inpid){
		id=inpid;
	}
	void getdata(){
		cout<<id<<endl;
	}
};

int main(){
	Employee harry(1), rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	
	programmer skillf(10);
	cout<<skillf.languagecode<<endl;
	cout<<skillf.id<<endl;
    skillf.getdata();
	return 0;
	
}
