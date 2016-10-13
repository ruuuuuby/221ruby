//----------------------------------------------------------
//  Name: ziling zhang
//  E-mail Address: zmz5078@psu.edu
//  Class: CMPSC 121 
//  Project # 4
//  Due Date: 10.14
//  Brief Project Description
//----------------------------------------------------------


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
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
	void output();
	return 0;
	}
bool isPrime(int number)
{
	bool status;
	int a;
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
	outputfile.open("prime1.txt");
	outputfile << "1"<<endl;
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

 
    

