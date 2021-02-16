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
	用法：
		当类的变量成员 为引用类型或者常类型时，必须用类的初始化列表来对其进行初始化
		而且初始化后不能在对其进行赋值； 
		 
	语法：
		类名：：类名（形参列表）： 类的数据成员1（对应的形参1），类的数据成员2（对应的形参2），  类的数据成员3（对应的形参3）{} 
*/ 

int main(){
	
	clock myclock(11,12,77);	
	return 0;
}
