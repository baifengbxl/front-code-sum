#include <iostream>
#include <string>

using namespace std;



class   Engine {
	friend class power;		//����powerΪ��  Engine����Ԫ�࣬ʹ��power���Է���Engine��˽�б���power 
	friend int getenginepower(Engine &eng);      //������Ԫ���� 
	public:
		int getpower();
	private:
		int power;
		string name;
};

class power{
	public:
		int getengine_power();
	private:
		string name;
		Engine engine;
};

int power::getengine_power(){
	return engine.power;
	
}

int getenginepower(Engine &eng){
	return eng.power;
}

int main(){
	
	/**
		�����Ԫ������
			����A������friend���εķǳ�Ա����b��     ������bΪ ��a����Ԫ����
			����b����������a���ڲ�����������a���ⲿ
			��Ԫ�����ṩ�˲�ͬ��֮��������ݹ���Ļ��ƣ�ʹ��b���Է�����a��˽�г�Ա����
			
		�����Ԫ�ࣺ	
			�ŵ㣺
				��Ԫ������߳����ִ��Ч��he�ɶ���
				��Ԫ�ࣺʹ����A���������ݳ�Ա�����Ա�������Ԫ�������� 
			ȱ�㣺	 
				���Ƕ��ڷ�װ�����ػ�����һ���ƻ�
				��Ԫ��Ĺ�ϵ���ܴ��� 
					�� A ���� B ����Ԫ���� B ���� C ����Ԫ��
					���ǣ��� A ������ C ����Ԫ
				��Ԫ��Ĺ�ϵ�ǵ����
					�� Car ���� Engine ����Ԫ������ Engine������ Car ����Ԫ��
					���ԣ�Engine ���ܷ��� Car ��˽�г�Ա
				 
	*/
	
	return 0;
}
