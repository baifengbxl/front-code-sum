#include <iostream>
using namespace std;
//point �� 
class point{
	public:
		point(double x,double y); 
		//��Ӹ��ƹ��캯��
		point(point & point); 
		~point(){
			cout << "point ����������" << endl; 
		}
	private:
		double x, y;
}; 
point::point(double x,double y) : x(x),y(y){
		cout << "point ����������" << endl; 
}

point::point(point &point ){
	x = point.x;
	y = point.y;
	cout << "���ƹ��캯�������� \n";
} 

//line �� 
class line{
	public:
		line (point p1, point p2); 
//		line(double x1, double y1, double x2, double y2);
		~line(){
			cout << "line ����������" << endl;
		}
		double getlength();
	private:
		point p1,p2;
};
//line::line (double x1, double y1, double x2, double y2) : p1(x1,y1), p2(x2,y2){}
line::line(point p1,point p2)  : p1(p1), p2(p2){     //��ʱpoint���캯�� ����������p1��p2�ǵ���point �ĸ��ƹ��캯����ʵ�ֵ� 
	cout << "line ����������" << endl; 
} 

//������ 
int main (){
	point p1(1,1);
	point p2(2,2);
	
	line myline(p1,p2); 
	return 0;
}
 
