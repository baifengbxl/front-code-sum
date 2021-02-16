#include <iostream>
#include <string>
using namespace std;

int main(){
	//string的两种初始化方式 
	string str1 = "hello,string1";
	string str2("hello,string2");
	cout << "str1=" << str1 <<endl;
	cout << "str2=" << str2 <<endl;
	
	//字符串的拼接
	string str3 = str1 + str2 ; 
	cout << "str3是字符串str1和str2的拼接，str3=" << str3 <<endl; 
	
	//将string类型转化为char*  类型
	string str4 = "hello,string4";
	const char*  ps = str4.c_str(); 
	// C_str()函数是string库所定义的一个函数，他的返回值是 指向该对象字符串的指针常量 
	cout << "str4=" << str4 <<endl;
	cout << "str4的首字母是：" <<  *ps <<endl ;
	//获取字符串的长度 
	int length = str4.length(); 

//倒叙输出	
//	while(length >= 0){
//		
//		cout << *(ps + length);
//		--length;
//	} 


	for(int i = 0; i < length; i++){
		cout << "str4=" << *(ps + i) << endl; 
	} 
return 0;
}
