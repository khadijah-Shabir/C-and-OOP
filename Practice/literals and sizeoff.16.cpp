#include<iostream>
using namespace std;
int main (){
	//************Float, double and long double literals***********
	 float f=34.4f;
    long double e=34.4L;
    cout<<"value of f is "<<f<<endl;
    cout<<"Value of e is "<<e<<endl;
    //34.4 ia a number . it is considered double by default.
    
    //*************sizeof******************
    cout<<"the size of 34.4 is"<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is"<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is"<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is"<<sizeof(34.4L)<<endl;
    cout<<"the size of 34.4L is"<<sizeof(34.4L)<<endl;
    
	
}

