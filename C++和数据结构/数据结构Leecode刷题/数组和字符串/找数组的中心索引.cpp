#include <iostream>
using namespace std;


//定义函数
int indexMid (int* arr ,int n){     //传递两个参数，一个是数组，第二个是数组的长度

	int sum = 0,
		sumLeft = 0,
		sumRight = 0;     			//定义三个数，来存放数组的和值
	
	for (int j=0;j<n;j++){
		sum+=arr[j];
	} 
//	cout << sum;    		//此时sum=28

	//数组存在中心索引 
	for(int i=0; i<n; i++){
		//特殊情况，当数组的索引为0是，sumLeft=0
		if(i == 0){
			sumLeft = 0;
		}else{
			sumLeft = sumLeft + arr[i-1];       //这里使用递归求出左值的和 
		}	
		sumRight = sum - sumLeft -arr[i];			//求出右值
		// 判断左值右值是否相等,若相等，则返回索引I 
		if (sumLeft == sumRight ){
			return i;
		} 
				
	} 
	//for循环结束，数组没有索引
	return  -1; 
		 
	
	
} 

int main (){
	
	 /**
    给定一个整数类型的数组 nums，请编写一个能够返回数组“中心索引”的方法。
    我们是这样定义数组中心索引的：数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。
    如果数组不存在中心索引，那么我们应该返回 -1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个。

    实例：
    输入: 
    nums = [1, 7, 3, 6, 5, 6]
    输出: 3
    解释: 
    索引3 (nums[3] = 6) 的左侧数之和(1 + 7 + 3 = 11)，与右侧数之和(5 + 6 = 11)相等。
    同时, 3 也是第一个符合要求的中心索引。   
    
    **/


	 int arr[] = {1, 7, 3, 6, 5, 6};    //定义一个数组
	 int length = sizeof (arr)/sizeof (arr[0]) ;   //求数组长度
//	 cout << length; 
	
	int indexMid (int* arr,int n);  	//函数的声明
	//定义一个值作为函数的返回值，（i 或者 -1） 
	int result = indexMid (arr ,length); 			//函数的调用 
	
	cout << "数组的中心索引为：" << result <<endl ;			//输出数组的中心索引  

return 0;
}
