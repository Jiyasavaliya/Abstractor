#include<iostream>
using namespace std;

class A1{
	
 virtual void print() = 0; 
};

class B1{
	
	public:
		
		int a;
		int b;
		
		public:
			
			void set(){
				
				cout<<"Enter 1st Number : ";
				cin>>a;
				
				cout<<"Enter 2nd Number : ";
				cin>>b;
				}
				
			
			void get(){
				
				cout<<"Your Totle Addition Is : "<<a+b<<endl;
				
			}
};
int main(){
	
	B1 obj;
	
	obj.set();
	obj.get();
}