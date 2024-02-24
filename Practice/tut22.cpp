//yar plz do it ..It's easy ..Trust me..No one ishere to support you and ask you if you are okay or not.

#include <iostream>
#include<string>
using namespace std;

 class binary{
 	private:
 		string s;	
 	public:
 		void read(void);
 		void ones_complement(void);
 		void display(void);
 		void chk_bin(void);
 };
 
 void binary ::read(void){
 	cout<<"Enter the binary number"<<endl;
 	cin>>s;
 }
 
 void binary::chk_bin(void){
 	cout<<"Checking if a number is binary or not"<<endl;
    for(int i=0; i< s.length(); i++) 
    {	
		if(s.at(i) != '0' && s.at(i) != '1')
		{   //String pe jo i index pe character h if that is not equal to 0 and 1 then print below string.
    		cout<<"incorrect binary format"<<endl;
    		exit(0);
		}
    }
			cout<<"Congratulations, your binary format is correct"<<endl;
		
 }

void binary::ones_complement(void){
	
  for(int i=0; i<s.length(); i++) {
	if(s.at(i)=='0')
	{
		s.at(i)='1';
     }
	else{
		s.at(i)='0';
        }

}
}

void binary::display(void){
	cout<<"displaying your binary no"<<endl;
	
  for(int i=0; i< s.length(); i++)
  {
  	cout<< s.at(i);
  }
cout<<endl;
}
 
 
 
 
 
 
int main(){
	binary b;
	b.read();
	b.chk_bin();
	b.display();
    b.ones_complement();
    b.display();
	
}

