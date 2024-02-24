//Protected Access Modifier in C++ | C++ Tutorials for Beginners #39

#include<iostream>
using namespace std;

//parent class 

class Base{
	
	   protected:
            int a;
		public:	 
        void assign(int a1){
     	a=a1;
	     };
	     
    private:
        int b;
        
        
};

//Child class inheriting from parent class

class Derived: protected Base{
	public:
     void display(){
        	cout<<"the value of a is "<<a<<endl;
		}
};

class check:public Derived{
	
};


int main(){
    Base b;
    check d;
    d.assign(4);
    d.display();
    
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}



                     //	Public Derivation      	Private Derivation    	Protected Derivation
//Private members          Not Inherited              	Not Inherited              	Not Inherited              
//Protected members          Protected                    Private                     Protected                    
//Public members           	Public	                      Private                    Protected                    

