#include <iostream>
using namespace std;
class A1{
	public:
	int x;
	void read(){
		cout <<"Enter the x value:\n";
		cin >>x;
	}
};
class A2:public A1{
	public:
	int y;
	void read1(){
		cout <<"Enter the y value:\n";
		cin >>y;
	}
};
class A3:public A2{
	public:
	int z;
	void read2(){
		cout<<"Enter the value of z:\n";
		cin>>z;
	}
	void product(){
		cout<<"The product value is:\n"<<x*y*z<<endl;
	}
};

int main()
{
	A3 obj1;
	obj1.read();
	obj1.read1();
	obj1.read2();
	obj1.product();
	return 0;
}
