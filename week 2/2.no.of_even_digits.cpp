/* Given an array nums of integers, return how many of them contain
an even number of digits. */

#include <iostream>
using namespace std;

int main()
{
    int size, rem, i, s = 0;
    cout << "enter the size of array:";
    cin >> size;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < size; i++)
    {
        int count = 0, a = 0;
        while (arr[i] > 0)
        {
            rem = arr[i] % 10;
            a += 1;
            arr[i] /= 10;
            if (rem % 2 == 0)
            {
                count += 1;
                continue;
            }
        }
        if (count == a)
            s += 1;
    }
    cout << s;
    return 0;
}
