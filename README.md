# 221ruby
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int);
void output();
ofstream outputfile;

int main()
{
	
	int number;
	cout << "Please enter an integer\n";
	cin >> number;

	if (isPrime(number))
		cout << number << " is a prime\n";
	else
		cout << number << " is not a prime\n";

	output();
	return 0;
	}
bool isPrime(int number)
{
	
	bool status;
	int a;
	
	if (number == 1 || number == 2)
	{
		status = true;
		return status;
	}
	for (a = 2;a < number;a++)
	{
		if (number%a == 0)
		{
			status = false;
			return status;
			break;
		}
	}
	
	if (number = a + 1)
		{
			status = true;
			return status;
		}	
}


void output()
{
	int b = 3;
	int c;
	ofstream outputfile;
	outputfile.open("prime2.txt");
	outputfile << "1\n2\n";
	while (b <= 100)
	{
		for (c = 2;c < b;c++)
		{
			if (b%c == 0)
			{
				break;
			}
		}
		outputfile << b << endl;
		b++;
	}
	outputfile.close();
}

 
    
