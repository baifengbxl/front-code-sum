#include <iostream>
using namespace std;


int main (){
	
	char*  str1   = "hello,bjfu ";    //char * �ַ�������͵��������������������
	char   str2[] = {'h','e', 'l',  'l', 'o', ',', 'b', 'j', 'f', 'u','\0'}  ; //ע��ĩβ�� \0
	string str3   = "hello,bjfu";
	
	cout << str1 << endl;
	cout << str2 << endl; // ���ʲô��
	cout << str3 << endl;

	
	return  0;
} 
