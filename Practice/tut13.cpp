#include<iostream>
using namespace std;
int main(){
	int marks[4] ={12, 34, 45, 56};
	int mathmarks[4];
	
	mathmarks[0]=78;
	mathmarks[1]=43;
	mathmarks[2]=45;
	mathmarks[3]=46;
	
//	cout<<marks[0]<<endl;
//	cout<<marks[1]<<endl;
//	cout<<marks[2]<<endl;
//	cout<<marks[3]<<endl;
	
//	for(int i=0; i<4; i++){
//		cout<< "The value of Marks  "<<i <<" is "<<marks[i]<<endl;
//	}
	
	//quiz **********do the same using do while and while loop
	cout<<"it's a while loop"<<endl;
	int i=0;
	while(i<4){
		cout<<marks[i]<<endl;
      i++;
	}

//   cout<<"it's a do-while loop"<<endl;
//	
//    int i=0;
//      do{
//		cout<<marks[i]<<endl;
//		i++;
//	} while(i<4);
	
	//you can change value in an array
	mathmarks[2]=455;
	cout<<"Math marks"<<endl;
	cout<<mathmarks[0]<<endl;
	cout<<mathmarks[1]<<endl;
	cout<<mathmarks[2]<<endl;
	cout<<mathmarks[3]<<endl;
	
	
	//*********************pointer arithmetic*****************
	//how address of next value of variable in an array is calculated.
	//adress new= address+i*4;
	//32=1*4=36
	
	//***************POinters and Arrays*********
//	Storing the address of an array into pointer is different than storing the address of a variable into the pointer
// because the name of the array is an address of the first index of an array. So to use ampersand "&" with the a
//rray name for assigning the address to a pointer is wrong.
//
//&Marks --> Wrong
//Marks --> address of the first block
//An example program for storing the starting address of an array in the pointer is shown in code snippet 4.
//	

int *p=marks; // p is a pointer that stores the adress of first index of array marks.
cout<< "*(p++)"<<*(p++)<<endl;
cout<< "*(++p)"<<*(++p)<<endl;
cout<<"THe value of marks[0] is:"<< *p<<endl;
cout<<"THe value of marks[1] is:"<< *(p+1)<<endl;
cout<<"THe value of marks[2] is:"<< *(p+2)<<endl;
cout<<"THe value of marks[3] is:"<< *(p+3)<<endl;
	
	
	return 0;
}
