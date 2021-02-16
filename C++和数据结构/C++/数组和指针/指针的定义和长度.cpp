#include <iostream>
using namespace std;

int main (){
		
//	int ival = 1024;
//	int *p0;   // 定义指针
//	int *p1 = NULL;   // 定义空指针
//	int *p2 = &ival;  // 定义指针,同时初始化
//	p1 = p2;     // 指针赋值
//	cout << *p1; // 打印指针所指地址内的值
//	p2 = 0;      // 指针 p2 不指向任何内存地址
//	cout << *p2; // 此时，不能打印出 1024
//	p2 = p1 + 1; // p2 指向 p1 所指地址的下一个地址单元
//	cout << *p2; 
	
	
	
int *pi;          cout << sizeof(pi) << endl;
double *pd;       cout << sizeof(pd) << endl;
struct Student { int id; int s1; int s2; };
Student *ps;      cout << sizeof(ps);

return 0;
}
