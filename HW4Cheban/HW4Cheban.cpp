#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter array size: ";
	cin >> size;
	int* arr = new int[size];
	cout << "First array: " << endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << "\t";
	}
	cout << endl << "Second array: " << endl;
	int* secArr = new int[size + 1];
	for (int i = 0; i < size + 1; i++)
	{
		if (i == size)
		{
			secArr[i] = 100;
		}
		else {
			secArr[i] = arr[i];
		}
		cout << secArr[i] << "\t";
	}
	cout << endl;
	delete[] arr;
	delete[] secArr;
}
