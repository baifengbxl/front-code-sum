#include <iostream>
using namespace std;
//point 类 
class point{
	public:
		point(double x,double y); 
		//添加复制构造函数
		point(point & point); 
		~point(){
			cout << "point 函数被析构" << endl; 
		}
	private:
		double x, y;
}; 
point::point(double x,double y) : x(x),y(y){
		cout << "point 函数被构造" << endl; 
}

point::point(point &point ){
	x = point.x;
	y = point.y;
	cout << "复制构造函数被调用 \n";
} 

//line 类 
class line{
	public:
		line (point p1, point p2); 
//		line(double x1, double y1, double x2, double y2);
		~line(){
			cout << "line 函数被析构" << endl;
		}
		double getlength();
	private:
		point p1,p2;
};
//line::line (double x1, double y1, double x2, double y2) : p1(x1,y1), p2(x2,y2){}
line::line(point p1,point p2)  : p1(p1), p2(p2){     //此时point够造函数 的两个对象p1和p2是调用point 的复制构造函数来实现的 
	cout << "line 函数被构造" << endl; 
} 

//主函数 
int main (){
	point p1(1,1);
	point p2(2,2);
	
	line myline(p1,p2); 
	return 0;
}
 
