/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#include "SoftwareArchitect.h"

/******************************************************************************
 * SoftwareArchitect
 * ----------------------------------------------------------------------------
 * Default constructor. Assigns 0 or an empty string to all data members and
 * calls  the Employee class default constructor.
 *****************************************************************************/
SoftwareArchitect::SoftwareArchitect()
 	 	  	  	 :  Employee(), departmentNum(0), supervisor(""),
					percentIncrease(0), yearsOfExperience(0)
{
}

/******************************************************************************
 * SoftwareArchitect
 * ----------------------------------------------------------------------------
 * Non-default constructor. Assigns values declared at object instantiation to
 * all data members and calls the Employee class non-default constructor.
 *****************************************************************************/
SoftwareArchitect::SoftwareArchitect(string empName, int empID, string empPhone,
									 int empAge, char empGender, string empTitle,
									 string empSalary, int startMonth, int startDay,
									 int startYear, int  archDepartment,
									 string archSupervisor, int archIncrease,
									 int archExperience)
				 : Employee(empName, empID, empPhone, empAge, empGender,
						    empTitle, empSalary, startMonth, startDay, startYear),
				   departmentNum(archDepartment), supervisor(archSupervisor),
				   percentIncrease(archIncrease), yearsOfExperience(archExperience)
{
}

/******************************************************************************
 * ~SoftwareArchitect
 * ----------------------------------------------------------------------------
 * Class destructor. Does nothing.
 *****************************************************************************/
SoftwareArchitect::~SoftwareArchitect()
{
}

/******************************************************************************
 * SetDepartment
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in departmentNum to the value
 * passed in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   archDepartment - Software Architect's new Department Number must be
 * 	   					previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in departmentNum.
 *****************************************************************************/
void SoftwareArchitect::SetDepartment(int archDepartment)
{
	departmentNum = archDepartment;
}

/******************************************************************************
 * SetSupervisor
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in supervisor to the value passed
 * in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   archSupervisor - Software Architect's new Supervisor's Name must be
 * 	   					previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in supervisor.
 *****************************************************************************/
void SoftwareArchitect::SetSupervisor(string archSupervisor)
{
	supervisor = archSupervisor;
}

/******************************************************************************
 * SetIncrease
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in percentIncrease to the value
 * passed in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   archIncrease - Software Architect's new Percent Increase must be
 * 	   				  previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in percentIncrease.
 *****************************************************************************/
void SoftwareArchitect::SetIncrease(int archIncrease)
{
	percentIncrease = archIncrease;
}

/******************************************************************************
 * SetExperience
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in yearsOfExperience to the value
 * passed in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   archExperience - Software Architect's new Years of Experience must be
 * 	   				    previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in yearsOfExperience.
 *****************************************************************************/
void SoftwareArchitect::SetExperience(int archExperience)
{
	yearsOfExperience = archExperience;
}

/******************************************************************************
 * PrintSoftwareArchitect
 * ----------------------------------------------------------------------------
 * This function prints a SoftwareArchitect object's information in columns
 * using the values stored in the data members and by calling the
 * PrintEmployee() function in the base class.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   There are no pre-conditions.
 *
 * POST-CONDITIONS:
 *     This function will print a software architect's information.
 *****************************************************************************/
void SoftwareArchitect::PrintSoftwareArchitect()const
{
	// Calls the PrintEmployee function to print the first part of the
	// software architect's information.
	PrintEmployee();

	// Outputs the headings for each of the columns.
	cout << left
		 <<	setw(NAME)       << " "       << setw(DEPARTMENT) << "Department"
		 << setw(SUPERVISOR) << "Supervisor's" << setw(RAISE) << "Raise"
		 << setw(EXPERIENCE) << "Years of"     << endl;

	cout <<	setw(NAME)       << " "          << setw(DEPARTMENT) << " "
		 << setw(SUPERVISOR) << "Name"       << setw(RAISE)      << "%"
		 << setw(EXPERIENCE) << "Experience" << endl;

	// Outputs the line denoting the size of each of the columns.
	cout << setw(NAME)   << " "              << setw(DEPARTMENT)
		 << "----------" << setw(SUPERVISOR) << "---------------" << setw(RAISE)
		 << "-----"      << setw(EXPERIENCE) << "----------"      << endl;

	// Outputs the values stored in the data members.
	cout <<	setw(NAME) << " " << setw(DEPARTMENT)      << departmentNum
		 << setw(SUPERVISOR)  << supervisor << setw(1) << percentIncrease
		 << setw(5) << "%"    << setw(EXPERIENCE)      << yearsOfExperience
		 << right   << endl   << endl;
}
