#include <iostream>
using namespace std;

//����׳˺��� 
int jiecheng(int n){
	
	int result = 1;
	for (int i = 1; i < n ; i++){
		
		result *= i; 	
	}
	return result;
} 

//�׳˺���������
int jiecheng(int); 

//������ 
int main(){
	//�׳�
	
	int num ;
	cout << "��������Ҫ��׳˵�����"; 
	//����׳˵����� 
	cin >> num ; 
	//���ý׳˺���
	int c = jiecheng(num);
	//������ 
	cout << num << "�Ľ׳��ǣ�" << c <<"\n";
	 
	
} 
