#include <iostream>
using namespace std;

int length(int * a){
	int j=0,
		i=0;
	//������ж�������ָ�������е�Ԫ������0��ֹͣ���� 
	//while(a[i] != NULL ){
	while(a[i] != '\0'  ){
		j++;
		i++;
	}
return j;
} 

int main(){
	
	int a[] = {1,3,5,8,99,0,7,6,44,22}; 
	//������ĳ���
	 int c = length(a);
	 cout << "����ĳ���Ϊ��" << c <<"\n"; 
return  0; 
} 
