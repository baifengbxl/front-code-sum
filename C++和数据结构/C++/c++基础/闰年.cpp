#include <iostream>
//#include <String>
using namespace std;

int   main(){
	//判断一个年份是否为闰年
	
	bool  Isyear;
	int   year; 
	
	//enter youor year 
	cout << "please enter your year :\n";
	//由于cin语句在输入到空格时，会自动结束输出
	//所以这里用getline（cin ，year）方法 
	 //getline(cin,year); 
	cin >> year;
	//just the year isnot a runyear 
	 Isyear = (year % 4 == 0 && year % 100 != 0)|| (year % 400 == 0); 
	 
	 if(Isyear) {
	      cout <<  year << " is a runyear";
	 }else {
	 	cout << year << " not a runyear ";
	 
	 }
	 
	return 0;
	
} 
