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

//void lookatclock( clock clock){	//调用对象，需要调用隐含的构造函数 
void lookatclock( clock &clock){    //对象的引用，不需要调用复制构造函数,效率较高 
	cout << clock.gethour() << ":" << clock.getminute() << endl;
}

int main(){
	
	clock myclock(12,12,12); 
	//系统会为形参clock建立对象，然后发生实参到形参的参数传递，此时调用隐含复制构造函数。但是效率比较低 
	lookatclock(myclock);
	return 0;
}
