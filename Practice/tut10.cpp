#include<iostream>
using namespace std;
int main(){
	//****************Loops in C++**********
	//there are three kinds of loops
	//for loop
	//while loop
	//Do-While loop
	
	
	//*********************for loop*********
//	for(initialization, condition, updation(increment/decreement))
//	{
//	   loop body(C++code)
//	}

//	for(int i=0; i<=30; i++){
//		cout<<i<<endl;
//	}
	
	//Example of infinite loop
//	for(int i=1; 34<=40; i++)
//	{
//		cout<<i<<endl;
//	}

//**************************While loop**********************
//initialization
//   while(condition){
//   	code
//   	increment
//   }
//	

//int i=1;
//while(i<=30){
//cout<<i<<endl;
//i++;
//}

//**************************do-While loop**********************
//initialization
//   do{
//   	code
//   	increment
//   }while(condition);


//      int i=1;
//  do{
//      cout<<i<<endl;
//      i++;
//    }while(i<=30);
//      


//*************************homework(Multiplication table)****************
int table;
cout<<"Enter the table no you need"<<endl;
cin>>table;

for(int i=1; i<=10; i++){
	cout<< table<<"*"<<i <<"="<<table*i<<endl;
}
	
	return 0;
}


