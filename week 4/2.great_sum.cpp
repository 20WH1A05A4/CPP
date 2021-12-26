/*Given a special set of numbers and a special sum. Find all those
combinations from the given set, equaling the given sum.*/

#include <iostream>
using namespace std;

int main()
{
    int size, i, sum, count = 0;
    cout << "enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elemnets: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum: ";
    cin >> sum;

    int j, k, l;
    for (i = 0; i < size - 3; i++)
    {
        for (j = i + 1; j < size - 2; j++)
        {
            for (k = j + 1; k < size - 1; k++)
            {
                for (l = k + 1; l < size; l++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[l] == sum)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}
