#include <iostream>
using namespace std;

//���庯��
int max_min(int a[], int n , int &max, int &min) {
	
	//ע�⣺������������ܺ��βε���ͬ 
    //int minn = 9999, maxx = -1;
	
	for(int i = 0; i < n; i++ ){
		if(max < a[i] ) max = a[i];
		if(min > a[i] ) min = a[i];
	}
	
} 

//zhuhanhsu
int main (){
	
	int array[]={99,-5,2,16,0,44};
	
	int max = -99999, min = 9999999 ;
	//���ú���
	int d = max_min(array, 6, max, min ); 
	//��������ֵ
	cout << "�����е����ֵΪ��" << max 
		 << "\n�����е���СֵΪ��" << min << "\n"; 
}
