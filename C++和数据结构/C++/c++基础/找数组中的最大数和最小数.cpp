#include <iostream>
using namespace std;


//����һ��ȫ�ֱ���
#define MAX_INT 9999999; 

//����������ֵ�ĺ���
int max(int array[] ,int n){
	//d����max��Ϊ�����е����ֵ 
	
	//int i = 0;
	//int max = array[i];
	
	//����max��ֵ��ʵ������㶨��
	int max=-1; 
	//����һ������
	for(int i = 0; i < n; i++  ){
		//�ж����е����ֵ
		if(max < array[i]){
			
			max = array[i];	
		} 
		
	} 
	
	return max;

} 


//������Сֵ����
int min(int array[] ,int n){
	//d����max��Ϊ�����е����ֵ 
	
	//int i = 0;
	//int max = array[i];
	
	//����max��ֵ��ʵ������㶨��
	int min=MAX_INT; 
	//����һ������
	for(int i = 0; i < n; i++  ){
		//�ж����е����ֵ
		if(min > array[i]){
			
			min = array[i];	
		} 		
	} 	
	return min;
}  

//����������
int max(int array[] ,int n); 
int min(int array[] ,int n);

int main (){
	//��д������ɨ��һ�����������飬ͬʱ�����������ĺ���С��ֵ

	//����һ������Ϊ6������
	int array[] = {99,-5,2,16,0,44};
	//���ú��� 
	int  c = max(array,6);
	int  d = min(array,6);
	cout << "�����е����ֵ�ǣ�" <<  c << "\n"; 
	cout << "�����е���Сֵ�ǣ�" <<  d << "\n"; 
	return 0;
	
} 
