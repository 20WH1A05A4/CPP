/*Write a C++ program to declare Struct. 
Initialize and display contents of member variables*/

#include <iostream>
using namespace std;

struct athlete
{
    char name[10];
    char sport[20];
};

int main()
{
    athlete a1;
    cout << "enter name : ";
    cin >> a1.name;
    cout << "enter sport : ";
    cin >> a1.sport;
  
    cout << "displaying content : " << endl;
    cout << "athlete name : " << a1.name << endl;
    cout << "athlete sport : " << a1.sport << endl;
    return 0;
}
