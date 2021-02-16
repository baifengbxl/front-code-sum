#include <iostream>
using namespace std;

class clock{
	public:
		clock(int h, int m, int s) : hour(h), minute(m), second(s) {
		}
		int gethour() const{
			return hour;
		}
		int getminute() const{
			return  minute;
		}
	private:
		int hour,minute,second; 
};

//void lookatclock( clock clock){	//���ö�����Ҫ���������Ĺ��캯�� 
void lookatclock( clock &clock){    //��������ã�����Ҫ���ø��ƹ��캯��,Ч�ʽϸ� 
	cout << clock.gethour() << ":" << clock.getminute() << endl;
}

int main(){
	
	clock myclock(12,12,12); 
	//ϵͳ��Ϊ�β�clock��������Ȼ����ʵ�ε��βεĲ������ݣ���ʱ�����������ƹ��캯��������Ч�ʱȽϵ� 
	lookatclock(myclock);
	return 0;
}
