#include<iostream>
using namespace std;
class complex{
	int a;
	int b;
	friend complex setDatabysum(complex o1, complex o2);
	public:
		void setData(int v1, int v2){
			a=v1;
			b=v2;	
		}
		void displaydata(){
			cout<<"The value of a complex number is" <<a<<"+"<<b<<"i"<<endl;
		}
	

};

	complex setDatabysum(complex o1, complex o2){
		 complex o3;
		 
		o3.setData((o1.a+o2.a) , (o1.b+o2.b)); 	
		return o3;
		}
		
int main(){
	 complex c1, c2, sum;
	 c1.setData(1,2);
	 c1.displaydata();
	 
	 c2.setData(3,4);
	 c2.displaydata();
	 
	 sum=setDatabysum(c1, c2);
	 sum.displaydata();
	 
	return 0;
}
