#include <iostream>
#include <string>

using namespace std;

int main(){
	//村键盘输入一个字符串，如果是hello就直接打印输出
	string str;
	//
	 shuru: while (cin>>str){
	  
	   if(str == "hello"){
	      cout << str <<"\n"; 
		  break; 
	   }else {
	   	cout <<"你的输入不是hello，请重新输入：";
	   }
	   
	}
	
	
} 
