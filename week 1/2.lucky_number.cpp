/* A company CEO is very curious on lucky numbers. 
One day he decided to know the all employees lucky 
numbers. A lucky number is calculate using date of 
birth Lucky Number: 
1. Date of Birth (DDMMYYYY)- 31081988 
2. Find sum of all digits of given DoB 
3. Repeat step 2 until the DOB turned into single digit 
For Example: 
1. 31081988 => 3+1+0+8+1+9+8+8 
2. 38 => 3+8 
3. 11 => 1+1 
4. 2 
Please help the CEO to find the lucky numbers of given employees
*/

#include <iostream>
using namespace std;

void luckySum(int);

int main()
{
	cout << "Enter the number: ";
	long long int num;
	cin >> num;
	cout << "The lucky number is ";
	luckySum(num);
}

void luckySum(int num)
{
	if (num >= 0 && num <= 10)
	{
		cout << num;
	}
	else
	{
		int x = 0;
		while (num >= 1)
		{
			x += (num % 10);
			num /= 10;
		}
		luckySum(x);
	}
}
