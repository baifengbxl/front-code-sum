#include <iostream>
using namespace std;



//���帴����
class complex{
	private:
		int real, imag;
	public:
		complex(int r = 0, int i = 0) : real(r), imag(i){}         //ע�⣺����Ҫ�Թ��캯�����βν���Ĭ�ϸ�ֵ���Ա�֤c3�Ĳ�������ȷ�� 
		
		/*
			��������������� 
				oprator +   -------> ������ 
				complex Ϊ�ú����ķ���ֵ����
				�ú����Ĳ����б�Ϊһ��complex�����һ������ 
				 
		*/
		
		complex operator + (complex &c2);
				
}; 

complex  complex:: operator + (complex &c2){
	complex c;
	c.real = this->real + c2.real;
	c.imag = this->imag + c2.imag;
	return c;  
} 

int main(){
	
	complex c1(2,2),
			c2(3,3),
			c3;
	
	c3 = c1 + c2;
	
	return 0;
} 
