#include <iostream>
using namespace std;

//函数的定义
int jiecheng(int n){
	
	if(n == 1 ) {
		return  1;	
	} 
	else {
		
		//int result = n*jiecheng(n-1);
		return (n*jiecheng(n-1));
	}
	
	//return result ;
} 


//阶乘函数的声明
	//注意：函数声名的时候可以只声明他的数据类型 
int  jiecheng (int );


int main(){
	/*
		使用递归的方法来求阶乘 
	
	*/
	int num ;
	cout << "请输入你要求阶乘的数：";
	cin >> num ;
	
	//调用阶乘函数 
	int c = jiecheng(num);
	//输出结果
	cout << num << "的阶乘是" << c << "\n"; 
	
	return 0 ;
} 
