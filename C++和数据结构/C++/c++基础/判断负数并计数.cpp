#include <iostream>

using namespace std;

int main(){
	
	//从低位向高位扫描一个整型数组，计算负整数的个数，遇到0则停止扫描
	
	
	//计数器 
	int j = 0; 
	int a[]={2,-4,-5,-7,3,8,9,0,-3};
	//扫描数组 
	for(int i=0; i<9; i++){
		//panduan这个数是不是负数
		
		if( a[i] < 0){
			
			j++;
			//输出这些负数
			cout << a[i] << "是负数\n"; 
		}else if(a[i] == 0){
			break;
			
		}	
	}
	
	//打印输出负数的个数；
	cout  << "\n该数组中一共有" << j << "个负数"; 
	return  0;
} 
