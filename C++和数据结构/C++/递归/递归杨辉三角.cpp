#include <iostream>
using namespace std;

int sanjiao(int row, int col){
	//�ݹ���ֹ���� 
	if (col == 0 || row == col) return 1;
	else return ( sanjiao(row - 1, col - 1) + sanjiao(row - 1, col));		
} 

int main (){

	int a[34][34];
	
	int row;   //row Ϊ���� 
	cout << "��������Ҫ��ӡ��������ǵ�������";
	cin >> row; 
	cout << "\n������������ǵ������\n\n"; 

	//���ú���������������
	//���� 
	for (int i = 0;i < row; i++ ){
		cout << "������ǵĵ�" << i+1 << "��Ϊ:" ;
		//����
		for(int j = 0; j <= i; j++){
			
			a[i][j] = sanjiao(i,j);
			cout << a[i][j] << " ";
		}
		cout << endl; 	
	}	
return 0;
}
