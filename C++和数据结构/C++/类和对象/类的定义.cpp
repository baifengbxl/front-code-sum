#include <iostream>
using namespace std;

//类的定义 
class clock {
	public: 
		void settime(int h, int m, int s);
		void showTime() {
	   		cout << hour << ":" << min << ":" << sec;
	  	};
	 
	private: 
		int hour,min,sec;
}; 
//类的定义结束 

void clock::settime(int h,int m,int s){
		hour = h;
		min = m;
		sec = s;
}



int main(){
	
	clock myclock;
	myclock.settime(12,33,56);
	myclock.showTime();
	
return 0;
}
