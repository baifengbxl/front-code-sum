#include <iostream>
using namespace std;

//定义阶乘函数 
int jiecheng(int n){
	
	int result = 1;
	for (int i = 1; i < n ; i++){
		
		result *= i; 	
	}
	return result;
} 

//阶乘函数的声明
int jiecheng(int); 

//主函数 
int main(){
	//阶乘
	
	int num ;
	cout << "请输入你要求阶乘的数："; 
	//定义阶乘的数字 
	cin >> num ; 
	//调用阶乘函数
	int c = jiecheng(num);
	//输出结果 
	cout << num << "的阶乘是：" << c <<"\n";
	 
	
} 
