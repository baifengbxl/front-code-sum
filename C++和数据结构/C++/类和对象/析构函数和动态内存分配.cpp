#include <iostream>
using namespace std;


//
class student{
	public:
		student(int id ,int cn);    //id为学生的学号，cn位学生的选课门数 
		~student();
	private:
		int id,cn;
		int *score;
		 
}; 

student::student(int id,int cn){
	this->id = id;
	this->cn = cn;
	
	score = new int [cn] ;   //动态内存分配 
}

student::~student(){
	
	delete [] score;	//删除内存 
} 


int main(){

	student jack(03,3);
	
return 0;
} 
