#include <iostream>
using namespace std;



class student{
	public:
		student(int id, int cn);
		~student();
		student(student &student);
		
		int setscore(int c, int s);
		int getscore(int c){
			cout << "������" << c <<"�ſεĳɼ�Ϊ" << score[c] << "\n"; 
		}
	private:
	int id, cn, c;
	int *score;
		 
};


student::student(int id, int cn ){
	this->id = id;
	this->cn = cn;	
	cout << "��ѧ����idΪ:" << id << " ѡ������Ϊ:" << cn <<endl; 
	score = new int[cn];   //
}

student::~student(){
	delete [] score;
}

//ǳ����
/* 
student::student(student &student){
	id = student.id;
	cn = student.cn;
	//ֱ�ӽ�ѧ��2������ָ��ָ��ѧ��1������ 
	score = student.score;
}
*/

//���
student::student(student &student){
	id = student.id;
	cn = student.cn;
	//Ϊ���ƶ��󴴽�һ���µ��������洢���� 
	score = new int[cn];
	for(int i = 0; i < cn; i++ ){
		score[i] = student.score[i];
	}
}  

int student::setscore(int c, int s){
	score[c] = s;
}

 
int main (){

  cout << "����ѧ������jack1" <<endl;	
  student jack1( 119, 5 );
  jack1.setscore( 1,90);
  jack1.getscore(1);
  
  cout  << "\n\n����ѧ��jack2 ����ѧ��jack1�����ݸ��Ƹ�jack2,���Ҹ�ѧ��jack2�ĵ�һ�ŷ������¸�ֵ" << endl; 
  student jack2 = jack1;
  jack2.setscore( 1, 80 );
  jack2.getscore(1);
  
  cout << "\n������ѧ��jack1�ķ���" <<"\n"; 
  jack1.getscore(1);

	
return 0;
} 
