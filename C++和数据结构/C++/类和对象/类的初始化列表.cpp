#include <iostream>
using namespace std;

class clock{
	
	public:
		clock(int aa, int bb, int cc);
	private:
		const int a;
		int &b;
		int c;
}; 

//clock::clock(int a, int b, int c){
//	this->a = a;
//	this->b = b;
//	this->c = c;
//	
//}

clock::clock( int aa, int bb, int cc) : a(aa), b(bb), c(20){ 
	
	cout << "a=" << aa <<endl;
	cout << "b=" << bb <<endl;
	cout << "c=" << cc <<endl;
}
/*
	�÷���
		����ı�����Ա Ϊ�������ͻ��߳�����ʱ����������ĳ�ʼ���б���������г�ʼ��
		���ҳ�ʼ�������ڶ�����и�ֵ�� 
		 
	�﷨��
		���������������β��б��� ������ݳ�Ա1����Ӧ���β�1����������ݳ�Ա2����Ӧ���β�2����  ������ݳ�Ա3����Ӧ���β�3��{} 
*/ 

int main(){
	
	clock myclock(11,12,77);	
	return 0;
}
