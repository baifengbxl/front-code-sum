#include <iostream>
using namespace std;

int main(){
	
	int ival1 = 32, ival2 = 64;
	int &rval = ival1;
	int *ptr;
	//int *为指针的类型  
	ptr  = &ival2;
	cout << "value of ival1 ="  << rval << endl;
	cout << "value of ival2 = " << *ptr << endl;
	//rval = rval * 2;
	//*ptr = (*ptr) * 2;
	
		
}
