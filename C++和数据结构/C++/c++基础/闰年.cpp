#include <iostream>
//#include <String>
using namespace std;

int   main(){
	//�ж�һ������Ƿ�Ϊ����
	
	bool  Isyear;
	int   year; 
	
	//enter youor year 
	cout << "please enter your year :\n";
	//����cin��������뵽�ո�ʱ�����Զ��������
	//����������getline��cin ��year������ 
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
