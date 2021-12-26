/* Given a string of random numbers, your job is to
find the product of the numbers(one is lesser and
one is greater) who is already present in the
string. For instance, a pronic number is a number
which is the product of two consecutive integers,
that is, a number of the form n(n + 1). Like 6 is
the pronic number as 2*3 = 6. */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    string a, b;
    cout << "enter the number: ";
    cin >> num;
    int i, pro, count;
    for (i = 0; i < int(num.length() - 1); i++)
    {
        a = num[i];
        b = num[i + 1];
        pro = stoi(a) * stoi(b);
        string sub = to_string(pro);
        if (num.find(sub) != string::npos)
        {
            count++;
            cout << sub << " ";
        }
    }
    if (count == 0)
        cout << "-1\n";
    return 0;
}
