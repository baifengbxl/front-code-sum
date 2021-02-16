#include <iostream>
using namespace std;



int fib(int n){
	if(n == 1 || n == 2)  return 1;
	else return (fib(n-1) + fib(n-2) );	
}

int main(){
	
	/** 
	* Title: 斐波纳契数列 
	* 
	* Description: 斐波纳契数列，又称黄金分割数列，指的是这样一个数列：1、1、2、3、5、8、13、21、…… 
	* 在数学上，斐波纳契数列以如下被以递归的方法定义：F0=0，F1=1，Fn=F(n-1)+F(n-2)（n>=2，n∈N*）。 
	* 
	* 两种递归解法：经典解法和优化解法 
	* 两种非递归解法：递推法和数组法  
	* 
	*/
	
	
	
	//定义数列的长度 
	int num ; 
	cout << "请输入你要打印的数列的长度: \t";
	cin >> num ;
	//用 i 作为数列的序号	
	for(int i = 1 ; i <= num ;i++){
		if ( i == 1 || i == 2) {
			cout << "数列的第" << i << "个数为: 1 \n" ;
		}else{	
			cout << "数列的第" << i << "个数为: " <<  (fib(i-1) + fib(i-2)) <<" \n" ;		
		     }
	}

	return 0 ; 
}
