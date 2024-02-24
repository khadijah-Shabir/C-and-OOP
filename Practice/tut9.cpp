#include<iostream>
using namespace std;
int main(){
    //Basic Control structures are of 3 types

   //sequence structure.....Entery--->Action1--->action 2---->action3----->action4---->exit

    //selection structure....you ask a question from program (a>45?)....true then do this...false than that...exit

    //loop structure

//selection structure
 //if else ladder
    cout<<"You are watching tutoral 9"<<endl;
    int age;
    cout<<"plz input your age"<<endl;
    cin>>age;

//    if (age<18){
//        cout<<"Youcannot come to the party"<<endl;
//    }
//    else if(age==18){
//      cout<<"You will get a kids pass for the party"<<endl;
//    }
//    else if(age<1){
//        cout<<"You are not yet born"<<endl;
//    }
//    else{
//        cout<<"You can come to the party"<<endl;
//    }
//     
    // switch case statement
    switch(age){
    	case 10:
    		cout<<"You are 10 years old;"<<endl;
    		break;
    		
    	case 20:
    	cout<<"You are 20 years old;"<<endl;
    	break;
    	
    	case 30:
    		cout<<"You are 30 years old;"<<endl;
    		break;
    	
    	default:
    		cout<<"YOu entered age do no match nay case"<<endl;
    	
	}

}
