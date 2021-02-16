#include <iostream>
//#include <iterator>
using namespace std;



//sizeof函数来求数组的长度
	
//int sf(int * a){
	//用i来获取数组数据类型的基本长度 
//	int i = sizeof(a[0]);
//	return (sizeof (*a)/i); 	
//}


//用end（）、begin（）函数来求数组长度
//int begin_end(int * a){
//	
//	return (end(a) - begin(a));
//} 
 


//函数的声明
//int sf(int *);
//int begin_end(int);
 
int main(){
	/**
	
		这里使用了sizeof （） 、 begin（）、end （） 函数来求数组的长度
			---sizeof（）：这个函数获得的时该元素数据类型的字节数长度，
				如：sizeof（int） = 4 ; //int类型的数据占据的字节数为4
			---begin（）：获得的是数组元素的首指针
			---end（）；获得的是数据尾元素的下一个元素的指针 
	
	*/
	
	
	int arr[] = {1,3,5,8,99,0,7,6,44,22}; 
	//调用函数 
	
	int length1 = sizeof(arr)/sizeof(arr[0]);
		
//	int *beg = begin(arr);//指向a首元素的指针
//    int *last = end(arr);
//	int length2 = last - beg;
	
	cout << "使用sizeof函数求出的数组长度为：" << length1 <<"\n";
//	cout << "使用begin() end()函数求出的数组长度为：" << length2 <<"\n";
return 0;
}
