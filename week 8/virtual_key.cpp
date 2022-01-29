#include<iostream>
using namespace std;
class A{
	public:
		virtual void fun(){
			cout<<"\nclass A fun is called";
		}
};
class B:public A{
	public:
	   	void fun(){
			cout<<"\nclass B fun is called";
		}
};
class C:public B{
	public:
		void fun()
		{
			cout<<"\nclass C fun is called";
		}
};

int main()
{
	C c;
	B *b=&c;
	b->fun();
	return 0;
}


