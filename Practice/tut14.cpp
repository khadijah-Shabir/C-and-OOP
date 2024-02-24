#include<iostream>
using namespace std;

//	just like an array is used to combine the same type of data types. An example program for creating a structure is shown in Code Snippet 1.

 //	The structure is a user-defined data type that is available in C++. Structures are used to combine different types of data types, 
//learn about typedef and then you wrote a shortcut form of employee ep;
//now you can write just ep
//instead of struct employee

//***********************Structures**********************

 typedef struct employee{
 	int eid;
 	char favChar;
 	float salary;
 } ep;
 
//************************Unions************************
//Unions are similar to structures but they provide better memory management then structures. 
// Unions use shared memory so only 1 variable can be used at a time. An example program to create unions is shown in Code Snippet 5.
 union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};

int main(){
	
	//****************Enums******************
//	Enums are user-defined types which consist of named constants. Enums are used to make the program more readable.
	 
	enum Meal{ breakfast, lunch, dinner}; //Meal is a datatype here
    Meal m1 = lunch;
    cout<<m1;
    
    
	
//    	union money m1;
//        m1.rice = 34;
//        cout<<m1.rice;
//	
//         ep khadijah;
////	struct ep Farhan;
////    struct ep Anaya;
//	khadijah.eid=456;
//	khadijah.favChar='A';
//	khadijah.salary=1200000;
//	cout<<"The value is "<<khadijah.favChar<<endl;
//	cout<<"The value is "<<khadijah.eid<<endl;
//	cout<<"The value is  "<<khadijah.salary<<endl;

 
	return 0;
}

//https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-14/

