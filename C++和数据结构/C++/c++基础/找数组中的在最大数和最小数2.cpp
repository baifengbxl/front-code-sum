#include <iostream>
using namespace std;

//定义函数
int max_min(int a[], int n , int &max, int &min) {
	
	//注意：这里的命名不能和形参的相同 
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
	//调用函数
	int d = max_min(array, 6, max, min ); 
	//输出你的数值
	cout << "数组中的最大值为：" << max 
		 << "\n数组中的最小值为：" << min << "\n"; 
}
