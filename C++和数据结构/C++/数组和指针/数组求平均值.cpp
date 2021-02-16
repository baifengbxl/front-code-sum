#include  <iostream>
using namespace  std;


/*
	求数组所有元素之和 
*
*/
	
double aver(double* a, int n){
	float sum = 0;
	for(int i = 0; i < n; i++){
		sum +=a[i];	
	}
	return (sum/n);
	
}

double aver(double* ,int ); 

int main(){
	//declare  arrsy
	double arr[]={1,2,4,3,5,6,7,8,9,10};
	int length = sizeof(arr)/sizeof(arr[0]); 
	
	//dioayonghanshu
	double y = aver(arr,length);
	cout << "数组的平均值为" << y << "\n";
return 0;
} 
