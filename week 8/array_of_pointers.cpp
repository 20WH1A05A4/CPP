#include <iostream>
using namespace std;

#define max 100

class Student
{
    string stud_name;
    int marks;
    public:
        void getStudentInfo(int i)
        {
            cout<< endl << "Enter the student " << i << " details" << endl;
            cout<< "Name of the Student: ";
            cin>> stud_name;
            cout<< "Marks secured: ";
            cin>> marks;
        }
        void displayStudentInfo()
        {
            cout << "Name of the Student : " << stud_name << endl;
            cout << "Marks secured : " << marks << endl;
        }
};
int main()
{
    Student stud[max],*ptr;
    int class_size;
    ptr=stud;

    cout<< "Enter the number of students in the class ( < " << max << "): ";
    cin>> class_size;

    for( int i=1; i<=class_size; i++ )
    {
        (ptr+i)->getStudentInfo(i);
    }

    cout<< endl << "***** Entered student data *****" << endl;

    for( int i=1; i<=class_size; i++ )
    {
        cout << "Student " << i << endl;
        (ptr+i)->displayStudentInfo();
    }
    return 0;
}


