#include <iostream>
#include <string>

using namespace std;



class   Engine {
	friend class power;		//声明power为类  Engine的友元类，使得power可以访问Engine的私有变量power 
	friend int getenginepower(Engine &eng);      //声明友元函数 
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
		类的友元函数：
			在类A里面用friend修饰的非成员函数b称     ：函数b为 类a的友元函数
			函数b的声明在类a的内部，定义在类a的外部
			友元函数提供了不同类之间进行数据共享的机制，使得b可以访问类a的私有成员变量
			
		类的友元类：	
			优点：
				友元可以提高程序的执行效率he可读性
				友元类：使得类A的所有数据成员都可以被他的友元类所访问 
			缺点：	 
				但是对于封装和隐藏机制是一种破坏
				友元类的关系不能传递 
					类 A 是类 B 的友元，类 B 是类 C 的友元，
					但是，类 A 不是类 C 的友元
				友元类的关系是单向的
					类 Car 是类 Engine 的友元，但类 Engine不是类 Car 的友元，
					所以，Engine 不能访问 Car 的私有成员
				 
	*/
	
	return 0;
}
