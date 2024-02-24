#include<iostream>
using namespace std;

	class employee{
		private:
			int id;
			int salary;
			
		public:
			void getId(void);
			void setId(void);
	};
 void employee::getId(){
 	cout<<"Enter your id"<<endl;
 	cin>>id;
 }
 void employee ::setId(){
 	cout<<"Id of your employee is "<<id<<endl;
 }
 int main(){
 	
// 	employee khadijah, ayesha , zeeshan , faizan;
 	employee fb[4];
 		for(int i=0; i<4; i++){
 		  fb[i]	.getId();
 		  fb[i]	.setId();
		 
	 }
 
}
