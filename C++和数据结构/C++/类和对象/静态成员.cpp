#include <iostream>
using namespace std;


class application{
	private:
		static int globe;
	public:
		static void f();
		static void g();
}; 

//��̬��Ա����/���ݳ�Ա�Ķ���һ��������ⲿ
int application::globe = 20; 

void application::f(){
	cout << globe <<endl;
} 

void application::g(){
	globe = 10;
}

int main(){
	/**
		��ľ�̬��Ա������static���� 
			���壺
				�����ĳ����ԱΪ��Ķ��������У����ʱ�����ǾͿ��Խ�������ݳ�Ա����Ϊ��̬��Ա����
			
			ע�����
				��ľ�̬��Ա��Ҫͨ���������  �� ���� ����������з��ʣ�����ֻ�о�̬��Ա����ͨ��������������
				�����Ƿ�������Ķ��󣬶�ҪΪ�侲̬��Ա����ռ�
				��̬��Ա������Ķ���̬�ڴ��ڲ�
				��̬��Ա����ֻ�ܷ��ʸ���ľ�̬���ݳ�Ա��̬��Ա���� 
			��ʼ����
				һ����ľ�̬��Ա�ĳ�ʼ����������ⲿ
				������Ҫ������������������޶�
					 
	**/
	
	//ֻ��ͨ��	����������̬��Ա   �� ��ʽ��������ľ�̬��Ա 
	application::f();
	application::g();
	
	application::f();
	
	return 0;
}
