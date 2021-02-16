#include<iostream>            
//�ļ�����ָ����ļ�iostream�еĴ���Ƕ�뵽�����У�cout��<<�����ڸ��ļ���������
#include<cmath>               
//������Ҫʹ��floor��������ҪǶ��ͷ�ļ�cmath
using namespace std;         
/*cout,endl���ڱ�׼�����ռ���������using namespace std���Խ���׼�����ռ�
�������ı�ʶ����¶�ڵ�ǰ�������С��ڳ����оͿ���ֱ��ʹ��cout�ȱ�ʶ�����������ټ�std::*/
class SavingsAccount{          
//���ùؼ���class����һ�������˻��࣬����ΪSavingsAccount
private:                       //˽�����ݳ�Ա
	int id;                    //�˺�
	double balance;            //���
	double rate;               //����������
	int lastDate;              //�ϴα������ʱ��
	double accumulation;       //�����ۼ�֮��
	void record(int date, double amount); 	
//˽�г�Ա������������Ϊrecord,���������βα�����dateΪ���ڣ�amountΪ���	
	double accumulate(int date) const{//const��Ա������������Ϊaccumulate����һ���βα���date
		return accumulation+balance*(date-lastDate);  //�������ָ�����ڵ��˻������ۻ�ֵ    
	}
public: //���г�Ա
	SavingsAccount(int date, int id, double rate); 
//���캯������ʼ�����ݳ�Ա              
	int getId(){return id;} 
//�ӿں��������ڻ���˺�id
	double getBalance(){return balance;} 
//�ӿں��������ڻ�����balance
	double getRate(){return rate;} 
//�ӿں��������ڻ��������
	void deposit(int date, double amount); 
//���г�Ա������������Ϊdeposit�����ڴ����ֽ�
	void withdraw(int date, double amount); 
//���г�Ա������������Ϊwithdraw������ȡ���ֽ�
	void settle(int date);
//���г�Ա������������Ϊsettle�����ڼ�����Ϣ
	void show();
//���г�Ա������������Ϊshow����������˻���Ϣ
};//SavingsAccount�ඨ�����
//SavingsAccount����س�Ա�����ľ���ʵ��
/**************************************************************
��������SavingsAccount
�βΣ�int date, int id, double rate
���ܣ����캯�������ó�ʼ���б�ķ�ʽ�����ݳ�Ա���г�ʼ����������˻���
����Ϣ��
����ֵ����
**************************************************************/
SavingsAccount::SavingsAccount(int date, int id, double rate)                   
	:id(id), balance(0), rate(rate), lastDate(date),accumulation(0){
		cout<<date<<"\t#"<<id<<"is created"<<endl;                           
}
/**************************************************************
��������record
�βΣ�int date, double amount
���ܣ��������룬���˻����и��£�������˻���Ϣ��
����ֵ��void
**************************************************************/
void SavingsAccount::record(int date, double amount){
	accumulation=accumulate(date);                    //����ϴμ�����Ϣ֮��ֱ�����һ�����䶯ʱ�����ۼ�ֵ
	lastDate=date;                                          //�������䶯������
	amount=floor(amount*100+0.5)/100;                       //����С�������λ
	balance+=amount;                                        //�������
	cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<endl;       //����˻���Ϣ
}
/**************************************************************
��������deposit
�βΣ�int date, double amount
���ܣ������ֽ�amount,����record�������˻����и��¡�
����ֵ��void
**************************************************************/
void SavingsAccount::deposit(int date, double amount){                            //�Թ��캯����ʹ�ó�ʼ����Ա�б�ķ�ʽ����ʼ�����ݳ�Ա
	record(date,amount);
}
/**************************************************************
��������withdraw
�βΣ�int date, double amount
���ܣ�ȡ���ֽ�amount,����record�������˻����и��¡�
����ֵ��void
**************************************************************/
void SavingsAccount::withdraw(int date, double amount){                            //�Թ��캯����ʹ�ó�ʼ����Ա�б�ķ�ʽ����ʼ�����ݳ�Ա
	if(amount>getBalance()) //Ҫȡ���ֽ���˻������бȽ�                                                       //ʹ��if��佫���������жԱ�
		cout<<"Error: not enough money"<<endl;//���������Ϣ                                     //������������������Error: not enough money��
	else
		record(date,-amount);
}
/**************************************************************
��������settle
�βΣ�int date
���ܣ�������Ϣ
����ֵ��void
**************************************************************/
void SavingsAccount::settle(int date){            
	double interest=accumulate(date)*rate/365;            //������Ϣ
	if(interest!=0)
		record(date,interest);
	accumulation=0;
}
/**************************************************************
��������show
�βΣ���
���ܣ���ʾ�˻������Ϣ
����ֵ��void
**************************************************************/
void SavingsAccount::show(){                               
	cout<<"#"<<id<<"\tBalance:"<<balance;                   
}
//�������ڣ�main����
int main(){                                                
	//���������˻�
	SavingsAccount sa0(1, 21325302, 0.015);
//�������sa0,�����г�ʼ��
	SavingsAccount sa1(1, 58320212, 0.015);
//�������sa1,�����г�ʼ��
    //������Ŀ
	sa0.deposit(5,5000);
//ͨ������sa0�������Ա����deposit��ʵ�ֶ��˺�Ϊ21325302���˻��������Ϊ5000
	sa1.deposit(25,10000);
//ͨ������sa1�������Ա����deposit��ʵ�ֶ��˺�Ϊ58320212���˻��������Ϊ10000
	sa0.deposit(45,5500);
//ͨ������sa0�������Ա����deposit��ʵ�ֶ��˺�Ϊ21325302���˻��������Ϊ5500
	sa1.withdraw(60,4000);
//ͨ������sa1�������Ա����deposit��ʵ�ֶ��˺�Ϊ58320212���˻�ȡ�ȡ����Ϊ4000
	//�������90�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
	sa0.settle(90);//ͨ������sa0�������Ա����settle
	sa1.settle(90);//ͨ������sa1�������Ա����settle
	//��������˻���Ϣ
	sa0.show(); cout<<endl;//ͨ������sa0�������Ա����show
	sa1.show(); cout<<endl;//ͨ������sa1�������Ա����show
	return 0;//���������������˳�main����������0��Ϊ����ֵ                 
}
