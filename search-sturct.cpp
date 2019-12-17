#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct Person
{
	string	Name;
	float	Salary;
	int		Age;

	Person()
	{
		Name = " ";
		Salary = 0;
		Age = 0;
	}

};


//function declarations
void printArray(int x,Person Array[],int SIZE);
void Search(Person Array[],int x,int SIZE,int loc,int i);

// Main Function
int main(int x,int i,int loc)
{

	Person Array[50];
	int SIZE = 2;
	for(int x = 0; x < SIZE; x++)
	{
		cout << "Name: " << endl;
			cin >> Array[x].Name;
		cout << "Salary: " << endl;
			cin >> Array[x].Salary;
		cout << "Age: " << endl;
			cin >> Array[x].Age;

	}

	printArray(x,Array,SIZE);
	SIZE = 3;
		for(int x = 2; x < SIZE; x++)
	{
		cout << "Name: " << endl;
			cin >> Array[x].Name;
		cout << "Salary: " << endl;
			cin >> Array[x].Salary;
		cout << "Age: " << endl;
			cin >> Array[x].Age;

			x = loc;
			Search(Array,x,SIZE,loc,i);
			cout << loc << endl;
	}

	printArray(x,Array,SIZE);

	return 0;
}

// Function that will print array
void printArray(int x, Person Array[],int SIZE)
{
	cout << "Name" << setw(13) << right << "Salary" << setw(8);
	cout << right << setw(8) << "Age\n";
	cout << "________________________\n";
	for(int x = 0; x < SIZE; x++){
	cout << left << setw(9) << Array[x].Name;
	cout << fixed << setprecision(2) << right << "$ " << setw(9) << Array[x].Salary;
	cout << setw(4) << Array[x].Age << endl;
	}
}

void Search(Person Array[],int x,int SIZE,int loc,int i)
{
	for(int i = 0; i < loc; i++)
	{
		if(Array[loc].Name < Array[i].Name)
		{
			loc = i;
			break;
		}
	}
}
