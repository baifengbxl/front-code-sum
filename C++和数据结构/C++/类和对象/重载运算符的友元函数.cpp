#include <iostream>
using namespace std;
class complex{
	public:
		complex(double r=0.0, double i=0.0) : real(r), imag(i){
			cout << "构造函数被调用 \n"; 
		}
		friend complex operator + (complex &c1, complex &c2);
		friend complex operator - (complex &c1, complex &c2);
		void display(){
			cout << real << "+" << imag << "i" <<endl;
		}
	private:
		double real, imag;
}; 

complex operator +(complex &c1, complex &c2){
	complex c ;
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return c;
}

complex operator - (complex &c1, complex &c2){
	complex c ;
	c.real = c1.real - c2.real;
	c.imag = c1.imag -c2.imag;
	return c;
}
int main(){
	
	complex c1(1,1),
			c2(2,2),
			c3;
	c1.display();
	c2.display();
	c3.display();
	
	c3 = c1 + c2;
	c3.display();
	
	c3 = c1 - c2;
	c3.display();
	return 0;
}
