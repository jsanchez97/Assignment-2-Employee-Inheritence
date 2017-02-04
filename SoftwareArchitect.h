/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_

#include "Employee.h"

class SoftwareArchitect : public Employee
{
	public:
		SoftwareArchitect();
		SoftwareArchitect(string empName, int empID, string empPhone, int empAge,
						  char empGender, string empTitle, string empSalary,
						  int startMonth, int startDay, int startYear,
						  int  archDepartment, string archSupervisor,
						  int archIncrease, int archExperience);
		~SoftwareArchitect();
		void SetDepartment(int archDepartment);
		void SetSupervisor(string archSupervisor);
		void SetIncrease(int archIncrease);
		void SetExperience(int archExperience);
		void PrintSoftwareArchitect()const;

	private:
	int    departmentNum;
	string supervisor;
	int    percentIncrease;
	int    yearsOfExperience;
};

#endif
