#include<iostream>
using namespace std;
class user{
	
	private:
	   int a;
	public:
	   int b;
	protected:
	   int c;
				
};
class student : public user{
	
	public:
	   void display(){
			
		b=20;
		cout<<b<<endl;
			
		c=30;
		cout<<c;
			
		}
};

int main(){
	
	student obj;
	obj.display();
	return 0;
}
