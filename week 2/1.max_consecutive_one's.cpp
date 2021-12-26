/* Given a binary array nums, return the maximum number of
consecutive 1's in the array. */

#include <iostream>
using namespace std;

int main()
{
    int size, i, count = 0;
    cout << "enter the size of the array:";
    cin >> size;
    int arr[size], arr1[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            count += 1;
        else
            count = 0;
        arr1[i] = count;
    }
    int max = arr1[0];
    for (i = 1; i < size; i++)
    {
        if (arr1[i] > max)
            max = arr1[i];
    }
    cout << max;
    return 0;
}
