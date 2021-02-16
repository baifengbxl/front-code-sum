#include <iostream>
using namespace std;



class student{
	public:
		student(int id, int cn);
		~student();
		student(student &student);
		
		int setscore(int c, int s);
		int getscore(int c){
			cout << "该生第" << c <<"门课的成绩为" << score[c] << "\n"; 
		}
	private:
	int id, cn, c;
	int *score;
		 
};


student::student(int id, int cn ){
	this->id = id;
	this->cn = cn;	
	cout << "该学生的id为:" << id << " 选课门数为:" << cn <<endl; 
	score = new int[cn];   //
}

student::~student(){
	delete [] score;
}

//浅复制
/* 
student::student(student &student){
	id = student.id;
	cn = student.cn;
	//直接将学生2的数组指针指向学生1的数组 
	score = student.score;
}
*/

//深复制
student::student(student &student){
	id = student.id;
	cn = student.cn;
	//为复制对象创建一个新的数组来存储分数 
	score = new int[cn];
	for(int i = 0; i < cn; i++ ){
		score[i] = student.score[i];
	}
}  

int student::setscore(int c, int s){
	score[c] = s;
}

 
int main (){

  cout << "创建学生对象jack1" <<endl;	
  student jack1( 119, 5 );
  jack1.setscore( 1,90);
  jack1.getscore(1);
  
  cout  << "\n\n创建学生jack2 ，将学生jack1的内容复制给jack2,并且给学生jack2的第一门分数重新赋值" << endl; 
  student jack2 = jack1;
  jack2.setscore( 1, 80 );
  jack2.getscore(1);
  
  cout << "\n下面是学生jack1的分数" <<"\n"; 
  jack1.getscore(1);

	
return 0;
} 
