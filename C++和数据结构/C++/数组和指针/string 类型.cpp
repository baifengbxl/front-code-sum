#include <iostream>
#include <string>
using namespace std;

int main(){
	//string�����ֳ�ʼ����ʽ 
	string str1 = "hello,string1";
	string str2("hello,string2");
	cout << "str1=" << str1 <<endl;
	cout << "str2=" << str2 <<endl;
	
	//�ַ�����ƴ��
	string str3 = str1 + str2 ; 
	cout << "str3���ַ���str1��str2��ƴ�ӣ�str3=" << str3 <<endl; 
	
	//��string����ת��Ϊchar*  ����
	string str4 = "hello,string4";
	const char*  ps = str4.c_str(); 
	// C_str()������string���������һ�����������ķ���ֵ�� ָ��ö����ַ�����ָ�볣�� 
	cout << "str4=" << str4 <<endl;
	cout << "str4������ĸ�ǣ�" <<  *ps <<endl ;
	//��ȡ�ַ����ĳ��� 
	int length = str4.length(); 

//�������	
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
