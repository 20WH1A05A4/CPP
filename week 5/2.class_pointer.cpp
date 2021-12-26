/*Write a C++ program to declare a class. Declare pointer to class. Initialize and display the
contents of the class member.*/

#include <iostream>
using namespace std;

class add
{
public:
    int a, b;
    void print()
    {
        cout << "Addition of " << a << " and " << b << " is : " << a + b << endl;
    }
};

int main()
{
    add x, *y;
    y = &x;
    cout << "enter two numbers : " << endl;
    cin >> y->a;
    cin >> y->b;
    y->print();

    cout << "enter two numbers : " << endl;
    int add::*ptr = &add::a;
    int add::*ptr1 = &add::b;
    cin >> x.*ptr;
    cin >> x.*ptr1;
    x.print();

    cout << "enter two numbers : " << endl;
    cin >> y->*ptr;
    cin >> y->*ptr1;
    y->print();
    return 0;
}
