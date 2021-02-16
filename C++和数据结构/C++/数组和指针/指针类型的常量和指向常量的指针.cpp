#include   <iostream>
using namespace std;



int main (){
	/*
		指针类型的常量和指向敞亮的指针
		
			--指针类型的常量 (int* const p1 = &var;) 
				p1是一个指针常量，他的值不能被改变， 
			    但是他所指向的空间(*p1)里面的内容可以改变   *p1相当于一个变量名 
			    
			--指向常量的指针 （const int* p2 = &var;）
				p2它是一个指针，他的值可以被改变 ，
			    他所指向的内容为一个常量，常量的值一旦被定义就不能被改变  
	*/
	int var = 10;
	int var1 = 11;
	
	int* const p1 = &var;  //指针类型的常量 
	
	 //p1 = &var1;    //p1是一个指针常量，他的值不能被改变， 但是他所指向的空间里面的内容可以改变 
	*p1 = var1;
	cout  <<  "p1改变后的值为：" << *p1 <<endl; 
	
	const int* p2 = &var; 
	
	 p2 = &var1;   //p2它是一个指针，他的值可以被改变 ，他是他所指向的内容为一个常量，常量的值一旦被定义就不能被改变 
	//*p2 = var1;
	cout << "p2改变后的值为：" << *p2  <<endl;
return 0;
}
