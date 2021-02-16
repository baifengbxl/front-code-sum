#include <iostream>
using namespace std;



//定义复数类
class complex{
	private:
		int real, imag;
	public:
		complex(int r = 0, int i = 0) : real(r), imag(i){}         //注意：这里要对构造函数的形参进行默认赋值，以保证c3的参数的正确性 
		
		/*
			定义运算符的重载 
				oprator +   -------> 函数名 
				complex 为该函数的返回值类型
				该函数的参数列表为一个complex对象的一个引用 
				 
		*/
		
		complex operator + (complex &c2);
				
}; 

complex  complex:: operator + (complex &c2){
	complex c;
	c.real = this->real + c2.real;
	c.imag = this->imag + c2.imag;
	return c;  
} 

int main(){
	
	complex c1(2,2),
			c2(3,3),
			c3;
	
	c3 = c1 + c2;
	
	return 0;
} 
