/*You will be given a number in the form of string,
extract out digits at odd places, square & merge
them. First 4 digits will be the required OTP.
Input : 34567
Output : 1636 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, element;
    int i, square_num;
    cin >> s;
    for (i = 1; i < int(s.length()); i += 2)
    {
        element = s[i];
        square_num = stoi(element) * stoi(element);
        cout << square_num;
    }
    return 0;
}
