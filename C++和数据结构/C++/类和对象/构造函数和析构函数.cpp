#include <iostream>
using namespace std;


class clock{
public:
	clock();
	~clock();
};

//���캯�������������Ķ���
clock::clock() { cout << "create a clock object\n"; }
clock::~clock(){ cout << "destruct a clock object\n"; }
 

int main(){
	
	
	//���캯�������������ڴ�����Ķ���ʱ�ᱻĬ�ϵ��� 
	clock myclock;
    return 0 ;
}
