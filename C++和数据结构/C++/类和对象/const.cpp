#include <iostream>
using namespace std;

class A{
	public:
		A(int i);
		~A(){cout << "�������� \n" ;}
		void  print();
		
	private:
		const	int a;
		static const int b;
};


//��̬����Ա�ĳ�ʼ������������ⲿ 
const int A::b = 10;

//����Ա����Ҫ����ĳ�ʼ���б�������
A::A(int i) : a(i){
	cout << "���������� \n"; 
} 

void A::print(){
	cout << "a=" << a << ";" << "b=" << b << endl; 
}

int main(){
	
	A	violet(20),
		violet2(10);
		
	violet.print();
	violet2.print();
	
	return 0;
} 
