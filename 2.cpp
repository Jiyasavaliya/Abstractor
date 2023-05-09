#include<iostream>
#include<string.h>
using namespace std;
class Parent {
	public:
		
   virtual void childdetails(){
   	cout<<"parent"<<endl;	
	}
};
class child : public Parent {
	public:
		
	 void childdetails(){
	 	cout<<"Child details"<<endl; 
	 }
};
int main(){
	
	Parent *obj1;
	child obj2;
	obj1=&obj2;
	obj1->childdetails();

	return 0;
}