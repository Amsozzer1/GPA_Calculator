#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class GPACALC
{
private:
	ofstream myfile;
	vector<int> Credit_hrs = { 0 }; // Stores ALL credit hrs for display
	vector<int> Cum_Credit_hrs = { 0 }; // Stores all cumulative credit hrs for calculations
	vector<int> Cred_Credit_hrs = { 0 }; // Stroes all creditted credit hours for calculations;
	vector<string> Letter_Grade; // Stores all letter Grades
	vector <string> Subjects; // to display subject name
	double Cum_GPA;
	double Cred_GPA;
	vector<int> Cum_Grade_Scored = { 0 };
	vector <int> Cred_Grade_Scored = { 0 };
	double a = 0; double b = 0; double c = 0; double d = 0;
public:
	GPACALC();
	void Letter_to_Grade(string Letter_grade, int y_n, int x);// x will be credit hrs of the subject.
	void data_in(string Letter_grade, int Cred_hrs, string Subject, int y_n);
	void Cum_GPA_Calc();
	void Cred_GPA_Calc();//stores result in cum_GPA
	void Report_card();//stores result in Cred_GPA


};

