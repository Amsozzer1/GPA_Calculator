#include <iostream>
#include "GPACALC.h"
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
	cout << "\t\t\t\tWelcome to the GPA Calculator\n";
	cout << "\t\t\t\t=============================\n\n\n";
	GPACALC x;
	string subject;
	string Letter_Grade;
	int Credit_Hours = 0;
	int casea = 0;
	int y_n;
	while (casea != 2)
	{
		cout << "Enter 1 to add a subject.\n";
		cout << "Enter 2 to quit the Program\n";
		cout << "Enter your option ==> ";
		cin >> casea;
		if (casea == 1)
		{
			cout << "Please Enter the name of the subject ==> ";
			cin >> subject;
			cout << "Please Enter the credit hours for this subject ==> ";
			cin >> Credit_Hours;
			cout << "Please Enter the Grade Scored in this subject == > ";
			cin >> Letter_Grade;
			cout << "Enter 1 if this subject is creditted and two if non creditted == > ";
			cin >> y_n;
			system("CLS");
			x.data_in(Letter_Grade, Credit_Hours, subject, y_n);
			x.Letter_to_Grade(Letter_Grade, y_n, Credit_Hours);


		}
	}
	casea = 0;
	
	x.Report_card();
}