#include <iostream>
using namespace std;

 int pivotIndex(int* nums,int n ) {
        	
		int sum=0,sumLeft = 0,sumRight = 0;   //����� 
		
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
    ����һ���������͵����� nums�����дһ���ܹ��������顰�����������ķ�����
    ���������������������������ģ����������������������Ԫ����ӵĺ͵����Ҳ�����Ԫ����ӵĺ͡�
    ������鲻����������������ô����Ӧ�÷��� -1����������ж��������������ô����Ӧ�÷��������ߵ���һ����

    ʵ����
    ����: 
    nums = [1, 7, 3, 6, 5, 6]
    ���: 3
    ����: 
    ����3 (nums[3] = 6) �������֮��(1 + 7 + 3 = 11)�����Ҳ���֮��(5 + 6 = 11)��ȡ�
    ͬʱ, 3 Ҳ�ǵ�һ������Ҫ�������������   
    
    **/
     int pivotIndex(int* nums,int n ) ;   //����������
     
     int Arr[] =  { 1, 7, 3, 6, 5, 6};
//     int length = sizeof(Arr)/sizeof(Arr[0]);   //����ĳ���
	 
	 int result = pivotIndex(Arr, 6);
	 
	 cout << "�������������Ϊ:" + result << endl; 
 
}
