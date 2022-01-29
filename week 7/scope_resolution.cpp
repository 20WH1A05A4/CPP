#include<iostream>
using namespace std;
class A {
	public:
		static int x;
		void show(){
			x = x+1;
			cout<<"value of x in class  is:"<<x<<endl;
		}
		void show1();
};
int A::x =10;
void A:: show1()
{
	x = x+2;
	cout<<"value of x out of class function is:"<<x<<endl;
}
int main(){
	A obj;
	obj.show();
	obj.show1();
	A::x = 10;
	cout<<"value of x in main function is:"<<A::x<<endl;

	return 0;
}
