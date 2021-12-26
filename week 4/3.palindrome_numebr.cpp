/*You are provided with a string of numbers, check whether it is a
palindrome or not. If it is not a palindrome, then, reverse the string,
add it to the original string and check again. You are required to
repeat the process until it becomes palindrome. Find the length of
palindromic string.
Input : 145
Output : 3 */

#include <iostream>
#include <string>
using namespace std;

int is_palindrome(string s);
int main()
{
    string s;
    cout << "enter the string(num): " << endl;
    cin >> s;
    cout << "the length of palindromic string is : " << is_palindrome(s) << endl;
    return 0;
}

int is_palindrome(string s)
{
    string temp = s;
    int add;
    reverse(s.begin(), s.end());
    if (s == temp)
    {
        return s.length();
    }
    else
    {
        add = stoi(s) + stoi(temp);
        string st = to_string(add);
        return is_palindrome(st);
    }
}
