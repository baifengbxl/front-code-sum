#include <iostream>
using namespace std;

class A{
	public:
		A(int i);
		~A(){cout << "对象被析构 \n" ;}
		void  print();
		
	private:
		const	int a;
		static const int b;
};


//静态常成员的初始化必须在类的外部 
const int A::b = 10;

//常成员必须要用类的初始化列表来定义
A::A(int i) : a(i){
	cout << "函数被构造 \n"; 
} 

void A::print(){
	cout << "a=" << a << ";" << "b=" << b << endl; 
}

int main(){
	
	A	violet(20),
		violet2(10);
		
	violet.print();
	violet2.print();
	
	return 0;
} 
