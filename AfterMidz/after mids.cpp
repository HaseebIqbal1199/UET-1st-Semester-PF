#include<iostream>
using namespace std;
int main()
{
	/*
		// Sum of an array 
		const int SIZE = 10;
		int numbers[10], Sum = 0;
		for (int i = 0; i < SIZE; i++)
		{
			cout << "Enter " << i+1 << " Number: " ;
			cin >> numbers[i];
			Sum += numbers[i];
		}
		cout << "Sum is: " << Sum;
	*/

	/*
		// First Occurrence
		const int SIZE = 10;
		int numbers[10], find;

		for (int i = 0; i < SIZE; i++)
		{
			cout << "Enter " << i + 1 << " Number: ";
			cin >> numbers[i];
		}
		cout << "Enter Number to find occurrence: ";
		cin >> find;
		for (int j = 0; j < SIZE; j++)
		{
			if (numbers[j] == find)
				cout << "Occurrence of " << find << " is " << j;
				break;
			
		}
		return 0;
	*/
	/*
	// Last Occurrence
		const int SIZE = 10;
		int numbers[10], find, occurrence;

		for (int i = 0; i < SIZE; i++)
		{
			cout << "Enter " << i + 1 << " Number: ";
			cin >> numbers[i];
		}
		cout << "Enter Number to find occurrence: ";
		cin >> find;
		for (int j = 0; j < SIZE; j++)
		{
			if (numbers[j] == find)
				occurrence = j;
		}
		cout << "Occurrence of " << find << " is " << occurrence;
		return 0;
	*/
	/*
		// delete a number
		const int SIZE = 10;
		int numbers[10], numToDel, index;

		for (int i = 0; i < SIZE; i++)
		{
			cout << "Enter " << i + 1 << " Number: ";
			cin >> numbers[i];
		}
		cout << "Enter Number to delete : ";
		cin >> numToDel;
		for (int j = 0; j < SIZE; j++)
		{
			if (numbers[j] == numToDel)
			{
				numbers[j] = 0;
				for (int k = j; k < SIZE; k++)
				{
					if (k < SIZE)
					{
						numbers[k] = numbers[k + 1];
					}

				}
			}
		}
	
		cout << "{ ";
		for (int l = 0; l < SIZE; l++)
		{
			if (l == (SIZE)-1)
				cout << " }";
			else
				cout << numbers[l] << ",";

		}
		return 0;
	*/
	const int SIZE = 10;
	int numbers[10];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter " << i + 1 << " Number: ";
		cin >> numbers[i];
	}
	for (int j = 0; j < SIZE;j++)
	{
		for (int l = j+1; l < SIZE; l++)
		{
			if (numbers[j] == numbers[l])
			{
				numbers[l] = -1;
			}
		}
	}
	cout << "{ ";
	for (int m = 0; m < SIZE; m++)
	{
		cout << numbers[m] << " ,";
	}
	cout << "}";
	
}