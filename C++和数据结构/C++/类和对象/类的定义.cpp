#include <iostream>
using namespace std;

//��Ķ��� 
class clock {
	public: 
		void settime(int h, int m, int s);
		void showTime() {
	   		cout << hour << ":" << min << ":" << sec;
	  	};
	 
	private: 
		int hour,min,sec;
}; 
//��Ķ������ 

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
