#include <iostream>
using namespace std;

class employee{
	public:
	int empnumber;
	char empname[10];
	float basicsalary,DA,IT,netsalary;
	void read(){
		cout<<"Enter the name\n";
		cin>>empname;
		cout<<"Enter the number\n";
		cin>>empnumber;
		cout<<"Enter the basic salary\n";
		cin>>basicsalary;
	}
	void DAdata(){
		DA = (52*basicsalary)/100;
	}
	void ITdata(){
		IT = (30*basicsalary)/100;
	}
	void Netsalary(){
		netsalary = (basicsalary +DA-IT);
	}
	void details(){
		cout<<"Employee Name:"<<empname<<endl;
		cout<<"Employee number:"<<empnumber<<endl;
		cout<<"DA data:"<<DA<<endl;
		cout<<"IT data:"<<IT<<endl;
		cout<<"Net salary:"<<netsalary<<endl;
	}
};

int main()
{
	cout<<"Enter the number of employees\n";
	int n,i;
	cin>>n;
	employee a[n];
	for(i=0;i<n;i++)
	{
		a[i].read();
		a[i].DAdata();
		a[i].ITdata();
		a[i].Netsalary();
		a[i].details();
	}
	return 0;
}
