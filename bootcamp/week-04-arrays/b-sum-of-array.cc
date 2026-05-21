#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	long long sum = 0;
	for (int j = 0; j < size; j++)
	{
		sum = sum + arr[j];
	}
	cout << sum;
	return 0;
}
