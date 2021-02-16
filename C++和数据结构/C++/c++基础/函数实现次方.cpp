#include <iostream>

using namespace std;

//函数的定义 
int  fuc(int a ,int b){
		
		/**方法一：用for循环实现 
		
		int result = 1;
	    for(int i = 1; i <= b; i++) {
		//a表示基数，b表示次方 
		 result *= a;	
		}
	
		return result; 
	**/
	
	
	//方法二：用while循环实现
	
	 int result = 1;
	 while (b>0){
	 	result *= a;
		//b--;    ----> a=b, b=b-1
		--b;	//  ----> b=b-1 ;  a=b;
	 } 
	 
	 return  result;
	} 
int main (){
	
	//用函数实现x的n次方 
	
	//函数的声明 
	cout << fuc(2,4) << "\n";
	return 0; 
	
}
