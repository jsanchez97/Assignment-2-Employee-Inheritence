/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "Employee.h"

class Programmer : public Employee
{
	public:
		Programmer();
		Programmer(string empName, int empID, string empPhone, int empAge,
				   char empGender, string empTitle, string empSalary,
				   int startMonth, int startDay, int startYear,
				   int progDepartment, string progSupervisor, int progIncrease,
				   bool progCPP, bool progJava);
		~Programmer();
		void SetDepartment(int progDepartment);
		void SetSupervisor(string progSupervisor);
		void SetIncrease(int progIncrease);
		void SetCPPKnowledge(bool progCPP);
		void SetJavaKnowledge(bool progJava);
		void PrintProgrammer()const;

	private:
		int    departmentNum;
		string supervisor;
		int    percentIncrease;
		bool   knowsCPP;
		bool   knowsJava;
};

#endif
