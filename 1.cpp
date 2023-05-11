#include<iostream>
using namespace std;
class A{
	
	virtual void print() = 0;
};
class B : public A{
	
	public:
		void print(){
		cout<<"JEEYA";
}
};
int main(){
	
	B obj;
	obj.print();
}
