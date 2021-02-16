#include <iostream>
using namespace std;
//申明全局变量 
#define MAX_INT 9999

//定义升序排列 
void swap_a (int &a,int &b){
	if ( a > b ){
		int temp = a;
		a = b;
		b = temp;
	}	
}

//定义降序排列 
void swap_d (int &a,int &b){
	if ( a < b ){
		int temp = a;
		a = b;
		b = temp;
	}	
}


//定义排序数组
int sort(int* a, int n, void  (*swap)(int &a,int &b) ){
	//排序 
	for(int i = 0; i < n; i++){
		for(int j = (i+1); j < n; j++){
			swap(a[i],a[j]);
		}
	}
	
} 

//定义一个交换类型 ，它指向的是函数的首地址；
//（*p）操作是这样一种运算，返回  p的值作为地址 的那个空间  的取值。 
typedef void (*Swap)(int &a, int &b);

//主函数 
int main(){
	/*
	
		要求：定义一个数组，要求分别给他升降序排列 
	*/
	
	int arr[MAX_INT];
	cout << "请输入数组的长度:";
	int num;  //array length
	int arr_content; 
	cin >> num;
	
	for (int i = 0; i < num; i++){
		cout << "请输入数组的第" << (i+1) << "个数：" ; 
		cin >> arr_content;
		arr[i] = arr_content;
	} 
	cout << endl << "------------------------\n"; 
	int j = 0;
	//打印数组的每个元素 
	while (j < num){
		cout << "数组的第 " << j << "个数为：" << arr[j++] <<endl; 
	}
	
	//打印数组 
	cout << "\n ------------------------- \n 数组为："; 
	for(int s = 0; s < num; s++){
		cout << arr[s] << " ";
	}
	
	
	
	//数组升序排列 
	Swap my_swap = swap_a;
	sort(arr,num, my_swap);
	cout << "\n ----------------------- \n 数组的升序排列为：" ; 
	for(int w = 0; w < num; w++){
		cout << arr[w] << " ";
	}
	
	//数组的降序排列
	my_swap = swap_d;
	sort(arr,num, my_swap);
	cout << "\n ----------------------- \n 数组的降序排列为：" ; 
	for(int m = 0; m < num; m++){
		cout << arr[m] << " ";
	}
	
return 0; 
}
