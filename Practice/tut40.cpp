#include<iostream>
using namespace std;

//class 1
 class student{
 	protected:
 		int roll_number;
 	public:
 		void set_roll_no(int);
 		void get_roll_no(void);
 };
	void student::set_roll_no(int r){
		roll_number=r;
	}
	
	void student::get_roll_no(){
		cout<<"The Rollnumber of Student is "<<roll_number<<endl;
	}
	
//Class 2	
class Exam: public student{
   	protected:
		float math;
		float physics;
	public:
		void set_marks(float, float);
		void get_marks(void);
};
//Defining methods
void Exam::set_marks(float m1, float m2){
	math=m1;
	physics=m2;
}
void Exam:: get_marks(){
	cout<<"the marks obtained in maths are "<<math<<endl;
	cout<<"the marks obtained in physics are "<<physics<<endl;
}

//class3

class Result:public Exam{
	float percentage;
	public:
		void display_result(){
				get_roll_no();
	         	get_marks();
			cout<<"Your percentage is"<<math+physics/2<<endl;
		}
};

int main(){
    Result khadijah;
    khadijah.set_roll_no(420);
    khadijah.set_marks(90,100);
    khadijah.display_result();
    
}
