#include <iostream>
using namespace std;


//����������

int swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;	
} 

//ð������
int swap(int* ,int*); 

int  maopao(int* a ,int n) {	
	//���ý�������
	
	//���鳤��Ϊn��������n-1 
	while ((n-1) > 0){
	    //���鳤�Ȳ�Ϊ0 
	    //������Ϊi��1��ʼ������a��n-1�������һ���� 
		for(int i = 1; i < (n); ++i){
			if( a[i-1] > a[i]){    //��������һֱ�� a��i�� 
				swap(a[i-1],a[i]);
			}		
		} 
		--n; 
	}
	return *a; 
		 	
}

int maopao(int* a ,int);  

int main(){
	/**
		�����㷨�� 
	
	*/	
	int arr[] = {1,3,5,345,7,1,45,-234,346,-45,254,56} ;
	int length = sizeof(arr)/sizeof(arr[0]);
	cout << "����ĳ���Ϊ��" << length <<endl ;
	
	cout << "����֮ǰ����������Ϊ:";
	for(int m = 0;m < length; m++){
	 	cout << arr[m] << " ";
	 } 
	 
	//���ú���
	 maopao(arr,length);
	 cout << "\n����������������Ϊ��" ; 
	 for(int m = 0;m < length; m++){
	 	cout << arr[m] << " ";
	 } 
	 
return 0;
}
