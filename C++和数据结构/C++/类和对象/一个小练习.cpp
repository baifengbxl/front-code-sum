/*****************************************************************
	 
	 定义类X，Y，Z，函数h(X*)，满足：
	 类X有私有成员i，Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1；
	 类Z是类X的友元类，其成员函数f(X*)实现对X的成员i加5；
	 函数h(X*)是X的友元函数，实现对X的成员i加10.
	 	
**********************************************************************/
#include <iostream>
using namespace std;

//定义类Y
class X;    //因为要在类Y Z 中使用类X，所以这里要用类的前向引用声明 
class Y {
	public:
		int g(X*p);
};  
//定义类Z 
class Z {
	public:
		int f(X*p);
};  

//定义类X 
class X{
	friend class Z;		//类Z是X的友元类 
	private:
		int i;
	public:
		X(int i);    //构造函数 
		friend int Y::g(X* p); 	 //类Y的成员函数 
		friend int h(X* P);    //友元函数 
		//设置类X的成员函数
		int add(int m=0){
			i = i + m;  //加法函数 
			cout << "i=" << i <<endl; 
		} 
};
//构造函数 
X::X(int i=0) : i(i){
	cout << "i的初始值为：i=" << i <<endl; 
}
//友元函数h(X*),实现对X的成员i加10.
int h(X* x){
	x->add(10);
} 

//Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1；
int Y::g(X* p){
	p->add(1);  //Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1；
}
// 类Z是类X的友元类，其成员函数f(X*)实现对X的成员i加5；
int Z::f(X* p){
	p->add(5);  
}


int main (){
	X x(0);
	Y y;
	Z z;
	
	h(&x);   //调用类的友元函数h（X*）
	y.g(&x);   //调用Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1 
	z.f(&x);	//	 类Z是类X的友元类，其成员函数f(X*)实现对X的成员i加5； 
	return 0;
} 
