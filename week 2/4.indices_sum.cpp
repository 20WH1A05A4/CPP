/* Given an array of integers nums and an integer target, return
indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order. */


#include <iostream>
using namespace std;

int main()
{
    int size, i, j, target;
    cout << "enter the size of array and the target";
    cin >> size >> target;
    int arr[size];
    for (i = 0; i < size; i++)
        cin >> arr[i];
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "indices are: " << i << " " << j;
            }
        }
    }
    return 0;
}
