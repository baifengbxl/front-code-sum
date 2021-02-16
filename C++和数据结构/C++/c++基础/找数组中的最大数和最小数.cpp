#include <iostream>
using namespace std;


//定义一个全局变量
#define MAX_INT 9999999; 

//定义求出最大值的函数
int max(int array[] ,int n){
	//d定义max作为数组中的最大值 
	
	//int i = 0;
	//int max = array[i];
	
	//这里max的值其实可以随便定义
	int max=-1; 
	//遍历一下数组
	for(int i = 0; i < n; i++  ){
		//判断其中的最大值
		if(max < array[i]){
			
			max = array[i];	
		} 
		
	} 
	
	return max;

} 


//定义最小值函数
int min(int array[] ,int n){
	//d定义max作为数组中的最大值 
	
	//int i = 0;
	//int max = array[i];
	
	//这里max的值其实可以随便定义
	int min=MAX_INT; 
	//遍历一下数组
	for(int i = 0; i < n; i++  ){
		//判断其中的最大值
		if(min > array[i]){
			
			min = array[i];	
		} 		
	} 	
	return min;
}  

//函数的声明
int max(int array[] ,int n); 
int min(int array[] ,int n);

int main (){
	//编写函数，扫描一个正整型数组，同时返回其中最大的和最小的值

	//定义一个长度为6的数组
	int array[] = {99,-5,2,16,0,44};
	//调用函数 
	int  c = max(array,6);
	int  d = min(array,6);
	cout << "数组中的最大值是：" <<  c << "\n"; 
	cout << "数组中的最小值是：" <<  d << "\n"; 
	return 0;
	
} 
