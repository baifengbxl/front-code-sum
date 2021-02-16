#include  <iostream>
using namespace std;

class Document {
	public:
		void setName(string name);
		void printName();
	private:
		string name;
}; 


class Book : public Document {
	public:
		void setBkPageNum();
		void setBkName();
		void getBkPageNum();
		void getBkName();
	private:
		int BkPageNum;
		string BkName;
};

int main(){
	
	return 0;
} 
