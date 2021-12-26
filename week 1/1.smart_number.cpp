/* A person X is playing a Game. In the game, he has to pick a number and determine whether 
it is a smart number or not. A number 'N' is called a smart number if the summation of all 
proper divisors of n is greater than 'N'. If n is a smart number print "YES" or else print 
"NO". 
Constraints: 1 = N= 10000 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num, sums = 1;
	cout << "Enter the number: ";
	cin >> num;
	for (int i = 2; i <= pow(num, 0.5); i++)
	{
		if (num % i == 0)
		{
			sums += i + (num / i);
		}
		
	}
	if (sums > num)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
