#include <iostream>
using namespace std;

int sanjiao(int row, int col){
	//递归终止条件 
	if (col == 0 || row == col) return 1;
	else return ( sanjiao(row - 1, col - 1) + sanjiao(row - 1, col));		
} 

int main (){

	int a[34][34];
	
	int row;   //row 为行数 
	cout << "请输入你要打印的杨辉三角的行数：";
	cin >> row; 
	cout << "\n下面是杨辉三角的输出：\n\n"; 

	//调用函数并输出杨辉三角
	//行数 
	for (int i = 0;i < row; i++ ){
		cout << "杨辉三角的第" << i+1 << "行为:" ;
		//列数
		for(int j = 0; j <= i; j++){
			
			a[i][j] = sanjiao(i,j);
			cout << a[i][j] << " ";
		}
		cout << endl; 	
	}	
return 0;
}
