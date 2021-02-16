#include <iostream>
using namespace std;
//����ȫ�ֱ��� 
#define MAX_INT 9999

//������������ 
void swap_a (int &a,int &b){
	if ( a > b ){
		int temp = a;
		a = b;
		b = temp;
	}	
}

//���彵������ 
void swap_d (int &a,int &b){
	if ( a < b ){
		int temp = a;
		a = b;
		b = temp;
	}	
}


//������������
int sort(int* a, int n, void  (*swap)(int &a,int &b) ){
	//���� 
	for(int i = 0; i < n; i++){
		for(int j = (i+1); j < n; j++){
			swap(a[i],a[j]);
		}
	}
	
} 

//����һ���������� ����ָ����Ǻ������׵�ַ��
//��*p������������һ�����㣬����  p��ֵ��Ϊ��ַ ���Ǹ��ռ�  ��ȡֵ�� 
typedef void (*Swap)(int &a, int &b);

//������ 
int main(){
	/*
	
		Ҫ�󣺶���һ�����飬Ҫ��ֱ�������������� 
	*/
	
	int arr[MAX_INT];
	cout << "����������ĳ���:";
	int num;  //array length
	int arr_content; 
	cin >> num;
	
	for (int i = 0; i < num; i++){
		cout << "����������ĵ�" << (i+1) << "������" ; 
		cin >> arr_content;
		arr[i] = arr_content;
	} 
	cout << endl << "------------------------\n"; 
	int j = 0;
	//��ӡ�����ÿ��Ԫ�� 
	while (j < num){
		cout << "����ĵ� " << j << "����Ϊ��" << arr[j++] <<endl; 
	}
	
	//��ӡ���� 
	cout << "\n ------------------------- \n ����Ϊ��"; 
	for(int s = 0; s < num; s++){
		cout << arr[s] << " ";
	}
	
	
	
	//������������ 
	Swap my_swap = swap_a;
	sort(arr,num, my_swap);
	cout << "\n ----------------------- \n �������������Ϊ��" ; 
	for(int w = 0; w < num; w++){
		cout << arr[w] << " ";
	}
	
	//����Ľ�������
	my_swap = swap_d;
	sort(arr,num, my_swap);
	cout << "\n ----------------------- \n ����Ľ�������Ϊ��" ; 
	for(int m = 0; m < num; m++){
		cout << arr[m] << " ";
	}
	
return 0; 
}
