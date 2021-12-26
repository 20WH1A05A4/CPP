/* Program to print all prime numbers between 1 to n, 
only if it is part of the Fibonacci series. 
For example: n value is 10, 
1 to 10 prime numbers are : 2, 3, 5, 7. 
Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21.. 
output is: 2,3,5 */
#include <iostream>
#include <cmath>

using namespace std;

int isPrime(int);

int main()
{
	int n;
	cout << "Enter the number: ";
	cin >> n;
	cout << "The prime fibonacci numbers between 1 and " << n << " (exclusive) are: ";
	int fibs_prev = 1;
	int fibs_next = 1;
	while (1)
	{
		int temp = fibs_prev;
		fibs_prev = fibs_next;
		fibs_next += temp;
		if (fibs_next >= n)
		{
			break;
		}
		if (isPrime(fibs_next))
		{
			cout << fibs_next << " ";
		}
	}
}

int isPrime(int num)
{
	if (num == 2 || num == 3)
	{
		return 1;
	}
	if (num == 1)
	{
		return 0;
	}
	if (num % 2 == 0)
	{
		return 0;
	}
	for (int m = 3; m <= pow(num, 0.5); m += 2)
	{
		if (num % m == 0)
		{
			return 0;
		}
	}
	return 1;
}
