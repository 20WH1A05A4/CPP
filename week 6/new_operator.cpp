#include <iostream>
using namespace std;
int main()
{
	new int[5];
	int i,a[10];
	cout << "Enter the elements into the array" << endl;
	for(i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	cout << "The elements in the array are:";
	for(i = 0; i < 5; i++)
		cout << a[i] << " ";
	return 0;
}

