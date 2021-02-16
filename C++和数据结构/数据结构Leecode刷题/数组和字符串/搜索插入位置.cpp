#include <iostream>
using namespace std;


int searchInsert(int* nums, int length, int target){
		
		/*
			s使用二分查找来对数组进行遍历 
		*/ 
		
		//定义两个值
		int i = 0;
		int j = length -1;
		int mid = 0;
		
		//特殊情况
		if (target < nums[0]) return  0;
		if (target > nums[j]) return length; 
	
		//二分查找 
		
	 while (i <= j) {
        mid = (i + j) / 2;
        if (target > nums[mid]) {
            i = mid + 1;
        }
        if (target < nums[mid]) {
            j = mid - 1;
        }
        if (target==nums[mid]) return mid;
    }
    return i;
}



int mian(){
	
	/**
	
	给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
	你可以假设数组中无重复元素。
	
	示例 1:
	
	输入: [1,3,5,6], 5
	输出: 2
	
	示例 2:
	
	输入: [1,3,5,6], 2
	输出: 1
	
	示例 3:
	
	输入: [1,3,5,6], 7
	输出: 4
	
	示例 4:
	
	输入: [1,3,5,6], 0
	输出: 0
		
	*/
	
	
	//
	int searchInsert(int* nums,int length, int target);
	int Arr[] = {1,3,5,6};
	int m = 7;
	
	int length = sizeof(Arr)/sizeof(Arr[0]);  
	int result = searchInsert(Arr,length, m);
	
} 
