#include "GPACALC.h"
#include <iostream>
#include <fstream>
using namespace std;

GPACALC::GPACALC() {};

void GPACALC::data_in(string a, int b, string c, int y_n)
{
	this->Letter_Grade.push_back(a);
	this->Subjects.push_back(c);
	
	
	if (y_n == 1)
	{
		this->Cum_Credit_hrs.push_back(b);
		this->Credit_hrs.push_back(b);
		this->Cred_Credit_hrs.push_back(b);
	}
	else if (y_n == 2)
	{
		this->Cum_Credit_hrs.push_back(b);
		this->Credit_hrs.push_back(b);
	}

}
void GPACALC::Letter_to_Grade(string Letter_Grade, int y_n, int x) 
{ 
	if (Letter_Grade == "A")
	{
		
		if (y_n = 1)
		{
			this->Cum_Grade_Scored.push_back(x * 4);
			this->Cred_Grade_Scored.push_back(x*4);
		}
		else if(y_n==2)
		{
			this->Cum_Grade_Scored.push_back(x * 4);
		}
		
	}
	else if (Letter_Grade == "B")
	{
		this->Cum_Grade_Scored.push_back(x*3);
		if (y_n == 1)
		{
			this->Cred_Grade_Scored.push_back(x*3);
		}

	}
	else if (Letter_Grade == "C")
	{
		this->Cum_Grade_Scored.push_back(x * 2);
		if (y_n == 1)
		{
			this->Cred_Grade_Scored.push_back(x*2);
		}

	}
	else if (Letter_Grade == "D")
	{
		this->Cum_Grade_Scored.push_back(x * 1);
		if (y_n == 1)
		{
			this->Cred_Grade_Scored.push_back(x * 1);
		}

	}
	else if (Letter_Grade == "F")
	{
		this->Cum_Grade_Scored.push_back(0);
		if (y_n == 1)
		{
			this->Cred_Grade_Scored.push_back(0);
		}

	}
	
	
}
void GPACALC::Cum_GPA_Calc()
{
	for (int i = 0; i < Cum_Credit_hrs.size(); i++)
	{
		this->a += Cum_Grade_Scored[i];
		this->b += Cum_Credit_hrs[i];
	}
	this->Cum_GPA = (a/(b*4)*4);
	cout << Cum_GPA;
}
void GPACALC::Cred_GPA_Calc()
{
	for (int j = 0; j < Cred_Credit_hrs.size(); j++)
	{
		this->c += Cred_Grade_Scored[j];
		this->d += Cred_Credit_hrs[j];
	}
	this->Cred_GPA = (c / (d * 4) * 4);

}
void GPACALC::Report_card()
{
	myfile.open("GPACALC.csv");
	myfile << "Serial No." << " , " << "Subject Name" << " , " << "Credit Hours" << " , " << " Letter Grade" << " , " << "Total Points" << " , " << " Points Scored \n";
	for (int i = 0; i < Subjects.size(); i++)
	{
		myfile << (i + 1) << " , " << Subjects[i] << " , " << Credit_hrs[i+1] << " , " << Letter_Grade[i] << " , " << (this->Credit_hrs[i+1]*4) << " , " << this->Cum_Grade_Scored[i+1] << "\n";
	}
	
	Cum_GPA_Calc();
	Cred_GPA_Calc();
	myfile << "\nYour cumulative GPA is ==> " << this->Cum_GPA;
	myfile << "\nYour creditted GPA is ==> " << this->Cred_GPA;
	

}