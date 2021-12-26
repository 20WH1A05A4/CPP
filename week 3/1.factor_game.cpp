/* For a given list of numbers, find its factors and add the factors. Then if
the sum of factors is present in the original list, sort it and print it else
print -1.*/

#include <iostream>
using namespace std;

int factor(int num);
int main()
{
    int size, i, j, c = 0;
    cin >> size;
    int arr[size], a[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        a[i] = factor(arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (a[i] == arr[j])
            {
                c += 1;
                cout << arr[i] << " ";
            }
        }
    }
    if (c == 0)
    {
        cout << "-1";
    }
    return 0;
}

int factor(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}
