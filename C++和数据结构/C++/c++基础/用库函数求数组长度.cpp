#include <iostream>
//#include <iterator>
using namespace std;



//sizeof������������ĳ���
	
//int sf(int * a){
	//��i����ȡ�����������͵Ļ������� 
//	int i = sizeof(a[0]);
//	return (sizeof (*a)/i); 	
//}


//��end������begin���������������鳤��
//int begin_end(int * a){
//	
//	return (end(a) - begin(a));
//} 
 


//����������
//int sf(int *);
//int begin_end(int);
 
int main(){
	/**
	
		����ʹ����sizeof ���� �� begin������end ���� ������������ĳ���
			---sizeof���������������õ�ʱ��Ԫ���������͵��ֽ������ȣ�
				�磺sizeof��int�� = 4 ; //int���͵�����ռ�ݵ��ֽ���Ϊ4
			---begin��������õ�������Ԫ�ص���ָ��
			---end��������õ�������βԪ�ص���һ��Ԫ�ص�ָ�� 
	
	*/
	
	
	int arr[] = {1,3,5,8,99,0,7,6,44,22}; 
	//���ú��� 
	
	int length1 = sizeof(arr)/sizeof(arr[0]);
		
//	int *beg = begin(arr);//ָ��a��Ԫ�ص�ָ��
//    int *last = end(arr);
//	int length2 = last - beg;
	
	cout << "ʹ��sizeof������������鳤��Ϊ��" << length1 <<"\n";
//	cout << "ʹ��begin() end()������������鳤��Ϊ��" << length2 <<"\n";
return 0;
}
