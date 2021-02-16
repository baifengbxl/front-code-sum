#include <iostream>
using namespace std;


//交换两个数

int swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;	
} 

//冒泡排序
int swap(int* ,int*); 

int  maopao(int* a ,int n) {	
	//设置进入条件
	
	//数组长度为n，则共排序n-1 
	while ((n-1) > 0){
	    //数组长度不为0 
	    //这里因为i从1开始，所以a【n-1】是最后一个数 
		for(int i = 1; i < (n); ++i){
			if( a[i-1] > a[i]){    //是最大的数一直是 a【i】 
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
		排序算法： 
	
	*/	
	int arr[] = {1,3,5,345,7,1,45,-234,346,-45,254,56} ;
	int length = sizeof(arr)/sizeof(arr[0]);
	cout << "数组的长度为：" << length <<endl ;
	
	cout << "排序之前的数组数列为:";
	for(int m = 0;m < length; m++){
	 	cout << arr[m] << " ";
	 } 
	 
	//调用函数
	 maopao(arr,length);
	 cout << "\n排序的数组输出序列为：" ; 
	 for(int m = 0;m < length; m++){
	 	cout << arr[m] << " ";
	 } 
	 
return 0;
}
