#include <iostream>
using namespace std;

//�����Ķ���
int jiecheng(int n){
	
	if(n == 1 ) {
		return  1;	
	} 
	else {
		
		//int result = n*jiecheng(n-1);
		return (n*jiecheng(n-1));
	}
	
	//return result ;
} 


//�׳˺���������
	//ע�⣺����������ʱ�����ֻ���������������� 
int  jiecheng (int );


int main(){
	/*
		ʹ�õݹ�ķ�������׳� 
	
	*/
	int num ;
	cout << "��������Ҫ��׳˵�����";
	cin >> num ;
	
	//���ý׳˺��� 
	int c = jiecheng(num);
	//������
	cout << num << "�Ľ׳���" << c << "\n"; 
	
	return 0 ;
} 
