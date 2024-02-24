//	In this lecture I'm going to create classes and objects (OOP)

#include<iostream>
using namespace std;

class employee{
	private:
	int a,b,c;
	public:
		int d,e;
		
		void setdata(int,int,int);
		void getdata();
		
};
void employee:: setdata(int a1, int b1, int c1){
	a=a1;
	b=b1;
	c=c1;
}
void employee::getdata(){
	cout<<"The value of a is  "<<a<<endl;
	cout<<"The value of b is  "<<b<<endl;
	cout<<"The value of c is  "<<c<<endl;
	cout<<"The value of d is  "<<d<<endl;
	cout<<"The value of e is  "<<e<<endl;
}
	
int main(){
	employee khadijah;
	khadijah.d=32;
	khadijah.e=67;
    khadijah.setdata(1,2,3);
    khadijah.getdata();

}
