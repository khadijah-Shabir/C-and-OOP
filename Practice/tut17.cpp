	//Lecture #17 Inline Functions, Default Arguments & Constant Arguments in C++ | C++ Tutorials for Beginners #17


#include<iostream>
using namespace std;

	
	inline int sum(int a, int b){
		return a*b;
	}
	
	int tax(int a, const float factor=1.07){ // you made a mistake here
		return a*factor;
	}
	
int main(){
	int x=10;
	int y=15;
    int z=45;
    
    cout<<"value of sum is"<<sum(x,y)<<endl;
    cout<<"value of sum is"<<sum(x,y)<<endl;
    cout<<"value of sum is"<<sum(x,y)<<endl;
    cout<<"value of sum is"<<sum(x,y)<<endl;
    cout<<"value of sum is"<<sum(x,y)<<endl;
    cout<<"value of sum is"<<sum(x,y)<<endl;
    cout<<"value of sum is"<<sum(x,y)<<endl;
	cout<<"value of sum is"<<sum(x,y)<<endl;
    
    int u=tax(z,1.1);
    cout<<u;
}


