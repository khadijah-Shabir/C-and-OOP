#include<iostream>
using namespace std;

class employee{
	int id;
	static int count;
	
	public:
		void getdata(){
		   	cout<<"enter your id"<<endl;
		   	cin>>id;
		   	count++;
		}
		void setdata(){
			cout<<"Id of employee is "<<id <<" and employee no is "<<count<<endl;
		}
		static void getcount(){
			cout<<"The employee number is "<<count<<endl;
		}
};

int employee:: count;
int main(){
	employee khadijah, farhan, faizan;
	
	khadijah.getdata();
	khadijah.setdata();
	employee::getcount();
	
	farhan.getdata();
	farhan.setdata();
	employee::getcount();
	
	faizan.getdata();
	faizan.setdata();
	employee::getcount();
	
}
