#include <iostream>
using namespace std;


//
class student{
	public:
		student(int id ,int cn);    //idΪѧ����ѧ�ţ�cnλѧ����ѡ������ 
		~student();
	private:
		int id,cn;
		int *score;
		 
}; 

student::student(int id,int cn){
	this->id = id;
	this->cn = cn;
	
	score = new int [cn] ;   //��̬�ڴ���� 
}

student::~student(){
	
	delete [] score;	//ɾ���ڴ� 
} 


int main(){

	student jack(03,3);
	
return 0;
} 
