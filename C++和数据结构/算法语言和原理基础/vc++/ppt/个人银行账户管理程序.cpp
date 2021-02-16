#include<iostream>            
//文件包含指令，将文件iostream中的代码嵌入到程序中，cout和<<就是在该文件中声明的
#include<cmath>               
//程序中要使用floor函数，需要嵌入头文件cmath
using namespace std;         
/*cout,endl等在标准命名空间中声明，using namespace std可以将标准命名空间
中声明的标识符暴露在当前作用域中。在程序中就可以直接使用cout等标识符，而不用再加std::*/
class SavingsAccount{          
//利用关键字class定义一个储蓄账户类，类名为SavingsAccount
private:                       //私有数据成员
	int id;                    //账号
	double balance;            //余额
	double rate;               //存款的年利率
	int lastDate;              //上次变更余额的时期
	double accumulation;       //余额按日累加之和
	void record(int date, double amount); 	
//私有成员函数，函数名为record,包含两个形参变量，date为日期，amount为金额	
	double accumulate(int date) const{//const成员函数，函数名为accumulate，有一个形参变量date
		return accumulation+balance*(date-lastDate);  //计算截至指定日期的账户金额按日累积值    
	}
public: //公有成员
	SavingsAccount(int date, int id, double rate); 
//构造函数，初始化数据成员              
	int getId(){return id;} 
//接口函数，用于获得账号id
	double getBalance(){return balance;} 
//接口函数，用于获得余额balance
	double getRate(){return rate;} 
//接口函数，用于获得年利率
	void deposit(int date, double amount); 
//公有成员函数，函数名为deposit，用于存入现金
	void withdraw(int date, double amount); 
//公有成员函数，函数名为withdraw，用于取出现金
	void settle(int date);
//公有成员函数，函数名为settle，用于计算年息
	void show();
//公有成员函数，函数名为show，用于输出账户信息
};//SavingsAccount类定义结束
//SavingsAccount类相关成员函数的具体实现
/**************************************************************
函数名：SavingsAccount
形参：int date, int id, double rate
功能：构造函数，采用初始化列表的方式对数据成员进行初始化，并输出账户创
建信息。
返回值：无
**************************************************************/
SavingsAccount::SavingsAccount(int date, int id, double rate)                   
	:id(id), balance(0), rate(rate), lastDate(date),accumulation(0){
		cout<<date<<"\t#"<<id<<"is created"<<endl;                           
}
/**************************************************************
函数名：record
形参：int date, double amount
功能：根据输入，对账户进行更新，并输出账户信息。
返回值：void
**************************************************************/
void SavingsAccount::record(int date, double amount){
	accumulation=accumulate(date);                    //获得上次计算利息之后直到最近一次余额变动时余额按日累加值
	lastDate=date;                                          //更新余额变动的日期
	amount=floor(amount*100+0.5)/100;                       //保留小数点后两位
	balance+=amount;                                        //计算余额
	cout<<date<<"\t#"<<id<<"\t"<<amount<<"\t"<<balance<<endl;       //输出账户信息
}
/**************************************************************
函数名：deposit
形参：int date, double amount
功能：存入现金amount,调用record函数对账户进行更新。
返回值：void
**************************************************************/
void SavingsAccount::deposit(int date, double amount){                            //对构造函数，使用初始化成员列表的方式来初始化数据成员
	record(date,amount);
}
/**************************************************************
函数名：withdraw
形参：int date, double amount
功能：取出现金amount,调用record函数对账户进行更新。
返回值：void
**************************************************************/
void SavingsAccount::withdraw(int date, double amount){                            //对构造函数，使用初始化成员列表的方式来初始化数据成员
	if(amount>getBalance()) //要取的现金和账户余额进行比较                                                       //使用if语句将金额和余额进行对比
		cout<<"Error: not enough money"<<endl;//输出错误信息                                     //如果金额大于余额，则输出“Error: not enough money”
	else
		record(date,-amount);
}
/**************************************************************
函数名：settle
形参：int date
功能：计算年息
返回值：void
**************************************************************/
void SavingsAccount::settle(int date){            
	double interest=accumulate(date)*rate/365;            //计算年息
	if(interest!=0)
		record(date,interest);
	accumulation=0;
}
/**************************************************************
函数名：show
形参：无
功能：显示账户余额信息
返回值：void
**************************************************************/
void SavingsAccount::show(){                               
	cout<<"#"<<id<<"\tBalance:"<<balance;                   
}
//程序的入口，main函数
int main(){                                                
	//建立几个账户
	SavingsAccount sa0(1, 21325302, 0.015);
//定义对象sa0,并进行初始化
	SavingsAccount sa1(1, 58320212, 0.015);
//定义对象sa1,并进行初始化
    //几笔账目
	sa0.deposit(5,5000);
//通过对象sa0访问其成员函数deposit，实现对账号为21325302的账户存款，存款金额为5000
	sa1.deposit(25,10000);
//通过对象sa1访问其成员函数deposit，实现对账号为58320212的账户存款，存款金额为10000
	sa0.deposit(45,5500);
//通过对象sa0访问其成员函数deposit，实现对账号为21325302的账户存款，存款金额为5500
	sa1.withdraw(60,4000);
//通过对象sa1访问其成员函数deposit，实现对账号为58320212的账户取款，取款金额为4000
	//开户后第90天到了银行的计息日，结算所有账户的年息
	sa0.settle(90);//通过对象sa0访问其成员函数settle
	sa1.settle(90);//通过对象sa1访问其成员函数settle
	//输出各个账户信息
	sa0.show(); cout<<endl;//通过对象sa0访问其成员函数show
	sa1.show(); cout<<endl;//通过对象sa1访问其成员函数show
	return 0;//程序正常结束，退出main函数，并以0作为返回值                 
}
