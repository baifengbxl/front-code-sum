//#include <iostream>
//using namespace std;
//
//
//int main(){
//	
//	int arr[] = {1,2,3,4,6,5};
//	int item = 0;
//	
//	for(auto item : arr){
//		
//		cout << item <<endl;
//	}
//		
//} 



#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
	multiset<int> ms = { 1,2,6,2,4,3,3,8 };
 
	//��ǿforѭ�����
	for (auto item : ms)
	{
		cout << item << " ";
	}
	
	cout << endl;
 
	//������ģʽ���
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
 
	return 0;
}
