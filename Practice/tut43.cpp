#include<iostream>
using namespace std;
//creating simple calculator class

class SimpleCalculator{
	int a, b;
	char c;
	
	public:
		void calculate(){
	
	cout<<"Enter two numbers you want to perform calculation on"<<endl;
	cin>>a>>b;
	cout<<"Enter the operation you want to perform"<<endl;
	cin>>c;
	
	switch(c)
	{
		case '+':
			cout<<"sum is "<<a+b<<endl;
			break;
		case '-':
			cout<<"Substraction is "<<a-b<<endl;
			break;
		case '*':
			cout<<"Multiplicated answer is"<<a*b<<endl;
			break;
		case '/':
		
			cout<<"Division answer is"<<a/b<<endl;
			break;		
	}
		}
};
class scientific_calculator :public SimpleCalculator{
	
};
int main(){
	 scientific_calculator a;
	a.calculate();
}
