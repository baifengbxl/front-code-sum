#include <iostream>
using namespace std;

int main(){
	
	//输出斐波那契数列
	/**
		使用了递推法 
	*/
	
	int num ; 
	cout << "请输入你要打印的数列的长度: \t";
	A:
	cin >> num ;
	//判断输的数是否合法 
	if (num < 0 ) {
		cout << "请输入一个大于等于0的数 :";
		//不合法的时候跳转，使其重新输入 
		goto A; 
	}else{
		
		int f0 = 0,
			f1 = 1,
			f2 = 1,
			t;
			
		cout << "\n\n\n下面是斐波那契数列的输出：\n";
		//输出第1个数
		cout << "斐波那契数列的第1个数为" << f0 <<endl;
		cout << "斐波那契数列的第2个数为" << f1 <<endl;
		cout << "斐波那契数列的第3个数为" << f2 <<endl;
		
		for(int i = 3; i <= num; i++){
			//使用递推法，引入第三变量t
			
			//t相当于f（n-1） 
			t = f2;
			//f2 ----> f3
			f2 = f1 + f2;
			//f1 -----> f(n-2)
			f1 = t;
			 
			cout << "菲波那切数列的第" << i << " 个数为：" << f2 <<endl; 
			
		}
		 
	} 
	
return 0;	 
}
