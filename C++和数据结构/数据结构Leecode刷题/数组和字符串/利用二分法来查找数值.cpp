#include <iostream>
using namespace std;


int searchInsert(int* nums, int length, int target){
		
		/*
			sʹ�ö��ֲ�������������б��� 
		*/ 
		
		//��������ֵ
		int i = 0;
		int j = length -1;
		int mid = 0;
		
		//�������
		if (target < nums[0]) return  0;
		if (target > nums[j]) return length; 
	
		//���ֲ��� 
		while(i <= j){      //Ŀ��ֵ����������
			//����ֵ�Ķ��� 
			mid = (i+j)/2;
			
			//������ֵ���ұߣ��ı���ֵ 
			if (target > nums[mid]){
				i = mid + 1;	//��ֵ��Ϊ����ֵ����һ��ֵ 	
			} 
			//������ֵ����ߣ��ı���ֵ 
			if (target < nums[mid]){
				j = mid - 1;		//��ֵ��Ϊ����ֵ��ǰһ��ֵ 	
			}
			//ǡ��������ֵ 
			if (target == nums[mid]){
				return mid; 
			}	
		}
		
		//���ҽ�������������
		return i; 
}



int main(){
	
	/**
	
	����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
	����Լ������������ظ�Ԫ�ء�
	
	ʾ�� 1:
	
	����: [1,3,5,6], 5
	���: 2
	
	ʾ�� 2:
	
	����: [1,3,5,6], 2
	���: 1
	
	ʾ�� 3:
	
	����: [1,3,5,6], 7
	���: 4
	
	ʾ�� 4:
	
	����: [1,3,5,6], 0
	���: 0
		
	*/
	
	
	//
	int searchInsert(int* nums,int length, int target);
	int Arr[] = {1,3,5,6};
	int m = 7;
	
	int length = sizeof(Arr)/sizeof(Arr[0]);  
	int result = searchInsert(Arr,length, m);
	cout << "���������Ϊ��" << result <<endl;
	
} 
