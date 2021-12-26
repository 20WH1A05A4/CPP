/*Given that an EMPLOYEE class contains following members: data members: Employee
number, Employee name, Basic, DA, IT, Net Salary and print data members.*/

#include <iostream>
using namespace std;

class EMPLOYEE
{
public:
    int num, Basic, net;
    string name;
    float DA, IT;
    void salary(int basic, float da, float it)
    {
        DA = basic * (da / 100);
        basic += DA;
        IT = basic * (it / 100);
        net = basic - IT;
    }
};

int main()
{
    int n, b, salary;
    float da, it;
    string name1;
    EMPLOYEE emp1;

    cout << "enter employee number : ";
    cin >> emp1.num;
    cout << "enter employee name : ";
    cin >> emp1.name;
    cout << "enter employee basic : ";
    cin >> emp1.Basic;
    cout << "enter employee DA : ";
    cin >> emp1.DA;
    cout << "enter employee IT : ";
    cin >> emp1.IT;

    emp1.salary(emp1.Basic, emp1.DA, emp1.IT);

    cout << "employee number : " << emp1.num << endl;
    cout << "employee name : " << emp1.name << endl;
    cout << "employee basic : " << emp1.Basic << endl;
    cout << "employee DA : " << emp1.DA << endl;
    cout << "employee IT : " << emp1.IT << endl;
    cout << "employee SALARY : " << emp1.net << endl;

    return 0;
}
