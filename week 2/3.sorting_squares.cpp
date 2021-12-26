/* Given an integer array nums sorted in non-decreasing order, return
an array of the squares of each number sorted in non-decreasing
order */

#include <iostream>
using namespace std;

void sort(int arr[10], int size);
int main()
{
    int size, i, j;
    cout << "enter the size of array:";
    cin >> size;
    int a[size], arr[size];
    for (i = 0; i < size; i++)
        cin >> a[i];

    for (i = 0; i < size; i++)
        arr[i] = a[i] * a[i];

    sort(arr, size);
    return 0;
}

void sort(int arr[10], int size)
{
    int i, j;
    int pass;
    int temp;
    for (pass = 0; pass <= size - 1; pass++)
    {
        for (i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (j = 0; j < size; j++)
        cout << arr[j] << " ";
    return;
}
