#include<iostream>
using namespace std;

//This will not swap a and b.

void swap(int p, int t){
	int temp;
	temp=p;
	p=t;
	t=temp;
}
//This will swap a and b
//void swappointer(int* a, int* b){
//	int temp;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//}

//This will swap a and b using reference variable( a variable who have a nick name of actual parameter and changing it will change the actual parameter)
void swapReferenceVar(int &a, int &b){

    int	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x=4, y=5;
	int j=7, k=3;
	cout<<"The value of x is "<<x<<" the value of y is "<<y<<endl;
	swap(j,k);
	cout<<"The value of x is "<<j<<" the value of y is "<<k<<endl;
//	swappointer(&x,&y);
//	cout<<"The value of x is "<<x<<" the value of y is "<<y<<endl;
    swapReferenceVar(x,y);
    cout<<"The value of x is "<<x<<" the value of y is "<<y<<endl;
	

return 0;	
}
