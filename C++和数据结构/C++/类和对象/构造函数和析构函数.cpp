#include <iostream>
using namespace std;


class clock{
public:
	clock();
	~clock();
};

//构造函数和析构函数的定义
clock::clock() { cout << "create a clock object\n"; }
clock::~clock(){ cout << "destruct a clock object\n"; }
 

int main(){
	
	
	//构造函数和析构函数在创建类的对象时会被默认调用 
	clock myclock;
    return 0 ;
}
