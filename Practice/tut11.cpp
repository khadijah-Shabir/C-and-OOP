#include<iostream>
using namespace std;
int main(){
	cout<<"Understanding break statement"<<endl;
	for(int i=0; i<=30; i++)
	{
      	cout<<i<<endl;
		  if(i==2)	{
		  	break;
		  }
	}
	
	cout<<"Understanding continue statement"<<endl;
	
	for(int i=0; i<=30; i++)
	{
      	cout<<i<<endl;
		  if(i==2)	{
		  	continue;
		  }
	}
	
	
	return 0;	
}
