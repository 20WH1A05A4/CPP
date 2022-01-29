#include <iostream>
using namespace std;
class A1{
	public:
	int x;
	void read(){
	    cout<<"Enter the value of x:\n";
	    cin>>x;
	}
};
class A2{
	public:
	int y;
	void read1(){
		cout<<"Enter the value of y:\n";
		cin>>y;
	}

};
class A3:public A1,public A2{
	public:
	void product(){
		cout<<"The product is:\n"<<x*y<<endl;
		
	}
};
int main()
{
	A3 obj1;
	obj1.read();
	obj1.read1();
	obj1.product();
	return 0;
}
