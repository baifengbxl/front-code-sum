#include <iostream>
using namespace std;

int main (){
		
//	int ival = 1024;
//	int *p0;   // ����ָ��
//	int *p1 = NULL;   // �����ָ��
//	int *p2 = &ival;  // ����ָ��,ͬʱ��ʼ��
//	p1 = p2;     // ָ�븳ֵ
//	cout << *p1; // ��ӡָ����ָ��ַ�ڵ�ֵ
//	p2 = 0;      // ָ�� p2 ��ָ���κ��ڴ��ַ
//	cout << *p2; // ��ʱ�����ܴ�ӡ�� 1024
//	p2 = p1 + 1; // p2 ָ�� p1 ��ָ��ַ����һ����ַ��Ԫ
//	cout << *p2; 
	
	
	
int *pi;          cout << sizeof(pi) << endl;
double *pd;       cout << sizeof(pd) << endl;
struct Student { int id; int s1; int s2; };
Student *ps;      cout << sizeof(ps);

return 0;
}
