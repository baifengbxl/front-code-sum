#include <iostream>
using namespace std;


int main (){
	
	char*  str1   = "hello,bjfu ";    //char * 字符串最典型的特征：数据与操作分离
	char   str2[] = {'h','e', 'l',  'l', 'o', ',', 'b', 'j', 'f', 'u','\0'}  ; //注意末尾的 \0
	string str3   = "hello,bjfu";
	
	cout << str1 << endl;
	cout << str2 << endl; // 输出什么？
	cout << str3 << endl;

	
	return  0;
} 
