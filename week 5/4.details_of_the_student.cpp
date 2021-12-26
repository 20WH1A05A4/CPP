/*Write a C++ Program to display Names, Roll No., and grades of 3 students who have
appeared in the examination. Declare the class of name, Roll No. and grade. Create an array
of class objects. Read and display the contents of the array.*/

#include <iostream>
using namespace std;
class details
{
public:
    char name[10];
    int roll;
    char grade;
} arr[3];

int main()
{
    cout << "Enter the information of the students: " << endl;
    for (int i = 1; i <= 3; i++)
    {
        arr[i].roll = i;
        cout << "enter the name: " << endl;
        cin >> arr[i].name;
        cout << "enter the grade: " << endl;
        cin >> arr[i].grade;
        cout << endl;
    }
    for (int i = 1; i <= 3; i++)
    {
        cout << "roll: " << arr[i].roll << endl;
        cout << "name: " << arr[i].name << endl;
        cout << "grade: " << arr[i].grade << endl << endl;
    }
    return 0;
}
