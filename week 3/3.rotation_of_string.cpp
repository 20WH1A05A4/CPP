/*You are provided two or more strings, where each
string is associated with the number. If sum of square of digits is
even then rotate the string right by one
position, and if sum of square of digits is odd
then rotate the string left by two position.*/

#include <iostream>
using namespace std;
int digits(int num);
int main()
{
    int inputs, num, i;
    string s, r;
    cout << "no.of inputs: ";
    cin >> inputs;
    for (i = 0; i < inputs; i++)
    {
        cin >> s;
        cin >> num;
        if (digits(num) % 2 == 0)
        {
            r = s.substr(s.length() - 1) + s.substr(0, s.length() - 1);
        }
        else
        {
            r = s.substr(2, s.length() - 1) + s.substr(0, 2);
        }
        cout << r;
    }
    return 0;
}

int digits(int num)
{
    int sum, rem;
    while (num > 0)
    {
        rem = num % 10;
        sum += rem * rem;
        num /= 10;
    }
    return sum;
}
