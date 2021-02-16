#include <iostream>
using namespace std;



class Fred;	//前向引用声明
 
 class Barney {
 public:
   void method()
   {
//     x->yabbaDabbaDo();	//错误：Fred类的对象在定义之前被使用
   }
 private:

   Fred* x;   //正确，经过前向引用声明，可以声明Fred类的对象指针
 };
 
 class Fred {
 public:
   void yabbaDabbaDo();
 private:
   Barney* y;
 }; 



int main(){
	
	
	/**
		类应该先声明，后使用
		如果需要在某个类的声明之前，引用该类，则应进行前向引用声明。
		前向引用声明只为程序引入一个标识符，但具体声明在其它地方

		注意：
			类的前向引用声明 是基于一个完整的类的声明之前，而且不能声明该类的对象，也不能在内联成员函数中使用该类的对象 
			当你使用类的钱箱引用声明的时候，你只能使用被声明的符号，二不能涉及该类的的任何细节 
	**/
	
	return 0;
}
