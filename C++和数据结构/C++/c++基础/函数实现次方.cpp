#include <iostream>

using namespace std;

//�����Ķ��� 
int  fuc(int a ,int b){
		
		/**����һ����forѭ��ʵ�� 
		
		int result = 1;
	    for(int i = 1; i <= b; i++) {
		//a��ʾ������b��ʾ�η� 
		 result *= a;	
		}
	
		return result; 
	**/
	
	
	//����������whileѭ��ʵ��
	
	 int result = 1;
	 while (b>0){
	 	result *= a;
		//b--;    ----> a=b, b=b-1
		--b;	//  ----> b=b-1 ;  a=b;
	 } 
	 
	 return  result;
	} 
int main (){
	
	//�ú���ʵ��x��n�η� 
	
	//���������� 
	cout << fuc(2,4) << "\n";
	return 0; 
	
}
