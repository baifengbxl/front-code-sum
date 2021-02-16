#include <iostream>
using namespace std;


class application{
	private:
		static int globe;
	public:
		static void f();
		static void g();
}; 

//静态成员函数/数据成员的定义一般在类的外部
int application::globe = 20; 

void application::f(){
	cout << globe <<endl;
} 

void application::g(){
	globe = 10;
}

int main(){
	/**
		类的静态成员函数（static）： 
			定义：
				当类的某个成员为类的对象所共有，这个时候我们就可以将这个数据成员设置为静态成员函数
			
			注意事项：
				类的静态成员需要通过域操作符  “ ：： ”来对其进行访问，而且只有静态成员才能通过“：：”访问
				无论是否定义了类的对象，都要为其静态成员分配空间
				静态成员不在类的对象动态内存内部
				静态成员函数只能访问该类的静态数据成员或静态成员函数 
			初始化：
				一般类的静态成员的初始化放在类的外部
				而且需要类名和域操作符进行限定
					 
	**/
	
	//只能通过	类名：：静态成员   的 方式来访问类的静态成员 
	application::f();
	application::g();
	
	application::f();
	
	return 0;
}
