#include <iostream>

using namespace std;

int main(){
	//--a和a--的区别
	 
	 //--a
	 
	 int  a = 2;
	 int  b = a--;    //a-- <---> b=a ; a=a-1
	 
	 cout  <<"这是a--的算法 \n a=" << a
	  	   <<"\n b=" << b
	  	   <<"\n\n";
	  	   
	  	   
	//a--
	
	int  c = 2;
	int  d = --c;     //--a <---> c=c-1; d=c
	 
	 cout  <<"这是--a的算法\n c=" << c
	  	   << "\n d=" << d
	  	   <<"\n"; 
	  	   
	return 0;
} 
