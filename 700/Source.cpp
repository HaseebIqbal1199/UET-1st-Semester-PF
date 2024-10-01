#include <string>
#include <iostream> 
using namespace std;

int main()
{	
	/*
	int num1, num2;
	cout << "Enter Number 01 : ";
	cin >> num1;
	cout << "\nEnter Number 02 : ";
	cin >> num2;
	cout << "\nSum is : " <<num1+num2 << endl;
	*/
	/*
	int lenght, width, height, volume;
	cout << "Enter Lenght : ";
	cin >> lenght;
	cout << "\nEnter Width : ";
	cin >> width;
	cout << "\nEnter Height : ";
	cin >> height;
	volume = lenght * width * height;
	cout << "\nVolume  is: " << volume;
	*/
	/*
	int age, cnic;
	string roll, name;
	cout << "Enter Name : ";
	getline(cin, name);
	cout << "Enter Age : ";
	cin >> age;
	cout << "Enter Roll : ";
	cin >> roll;
	cout << "Enter cnic : ";
	cin >> cnic;
	cout << "My Name is " <<name<< " I am "<<age<< " years old, and my student Id is " << roll<< " and my cnic is " << cnic;
	*/
	/*
	float eng, cal, pf,avg;
	int percent;

	cout << "Enter English : ";
	cin >> eng;
	cout << "Enter Calculus : ";
	cin >> cal;
	cout << "Enter PF : ";
	cin >> pf;

	avg = (eng + cal + pf) / 3;
	percent = (((eng + cal + pf) * 100) / 300);
	cout << "Average: " << avg << "\nPercentage: " << percent << "%";
	return 0;
	*/
	/*
	int n1, i = 1,min = 0;
	char yeap;
	while (true)
	{
		cout << "Enter number: ";
		cin >> n1;
		min = n1 + 1;
		cout << "Enter charcter: ";
		cin >> yeap;
		if (yeap == 'y' || yeap == 'Y')
		{
			if (n1<min)
			{
				min = n1;
			}
		}
		else
		{
			if (n1 < min)
			{
				min = n1;
			}
			cout << min;
			break;
		}

	}
	system("pause");
	*/
	/*
	int number, range, i;
	cout << "Enter Number: ";
	cin >> number;
	cout << "Enter Number: ";
	cin >> range;
	i = 1;
	while (i <= range)
	{
		cout << number << "x" << i << "=" << number * i << endl;
		i++;
	}
	system("pause");
	*/
	/*
	int exponent, base,i=1,result = 1;
	cout << "Enter Base: ";
	cin >> base;
	cout << "Enter Exponent: ";
	cin >> exponent;
	while (i<=exponent)
	{
		result = result * base;
		i++;
	}
	cout << "Result: "<< result <<endl;
	system("pause");
	*/
	/*
	int number, range, i = 1, result = 0;
	cout << "Enter Number: ";
	cin >> number;
	while (i <= number)
	{
		result = result + i;
		i++;
	}
	cout << "Result: " << result << endl;
	system("pause");
	*/
	/*
	int number, i = 1, result = 1;
	cout << "Enter Number: ";
	cin >> number;
	while (i <= number)
	{
		result = result * i;
		i++;
	}
	cout << "Result: " << result << endl;
	system("pause");
	*/
	int number, i = 1, count = 0;
	cout << "Enter Number: ";
	cin >> number;
	while (i <= number)
	{
		if (number%i == 0)
		{
			count++;
		}
		i++;
	}
	if (count == 2)
	{
		cout << "Number is Prime "<<endl;
	}
	else
	{
		cout << "Number is not Prime "<< endl;
	}
	system("pause");

}
