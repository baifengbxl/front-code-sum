#include <iostream>
using namespace std;

 int pivotIndex(int* nums,int n ) {
        	
		int sum=0,sumLeft = 0,sumRight = 0;   //定义和 
		
        for (int m= 0; m < n; m++){
            sum = sum + nums[m];
        }

        for (int i=0;i<n;i++){
            if (i==0){
                sumLeft = 0;
            }else {
                sumLeft = sumLeft + nums[i-1];
            }
            sumRight = sum - sumLeft - nums[i];
            if (sumLeft==sumRight){
                return i;
            }
        }
        return -1;
    }



int main(){
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
     int pivotIndex(int* nums,int n ) ;   //函数的声明
     
     int Arr[] =  { 1, 7, 3, 6, 5, 6};
//     int length = sizeof(Arr)/sizeof(Arr[0]);   //数组的长度
	 
	 int result = pivotIndex(Arr, 6);
	 
	 cout << "数组的中心索引为:" + result << endl; 
 
}
