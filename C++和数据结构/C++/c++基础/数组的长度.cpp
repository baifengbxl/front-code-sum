#include <iostream>
using namespace std;

int length(int * a){
	int j=0,
		i=0;
	//这里的判断条件是指当数组中的元素遇到0后停止计数 
	//while(a[i] != NULL ){
	while(a[i] != '\0'  ){
		j++;
		i++;
	}
return j;
} 

int main(){
	
	int a[] = {1,3,5,8,99,0,7,6,44,22}; 
	//求数组的长度
	 int c = length(a);
	 cout << "数组的长度为：" << c <<"\n"; 
return  0; 
} 
