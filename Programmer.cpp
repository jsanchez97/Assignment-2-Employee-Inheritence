/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#include "Programmer.h"

/******************************************************************************
 * Programmer
 * ----------------------------------------------------------------------------
 * Default constructor. Assigns 0 or an empty string to all data members and
 * calls  the Employee class default constructor.
 *****************************************************************************/
Programmer::Programmer()
		  :  Employee(), departmentNum(0), supervisor(""), percentIncrease(0),
			 knowsCPP(0), knowsJava(0)
{
}

/******************************************************************************
 * Programmer
 * ----------------------------------------------------------------------------
 * Non-default constructor. Assigns values declared at object instantiation to
 * all data members and calls the Employee class non-default constructor.
 *****************************************************************************/
Programmer::Programmer(string empName, int empID, string empPhone, int empAge,
					   char empGender, string empTitle, string empSalary,
					   int startMonth, int startDay, int startYear,
					   int progDepartment, string progSupervisor, int progIncrease,
					   bool progCPP, bool progJava)
		  : Employee(empName, empID, empPhone, empAge, empGender, empTitle,
				  	 empSalary, startMonth, startDay, startYear),
			departmentNum(progDepartment), supervisor(progSupervisor),
			percentIncrease(progIncrease), knowsCPP(progCPP), knowsJava(progJava)
{
}

/******************************************************************************
 * ~Programmer
 * ----------------------------------------------------------------------------
 * Class destructor. Does nothing.
 *****************************************************************************/
Programmer::~Programmer()
{
}

/******************************************************************************
 * SetDepartment
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in departmentNum to the value
 * passed in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   progDepartment - Programmer's new Department Number must be previously
 * 	   					defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in departmentNum.
 *****************************************************************************/
void Programmer::SetDepartment(int progDepartment)
{
	departmentNum = progDepartment;
}

/******************************************************************************
 * SetSupervisor
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in supervisor to the value passed
 * in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   progSupervisor - Programmer's new Supervisor's Name must be previously
 * 	   					defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in supervisor.
 *****************************************************************************/
void Programmer::SetSupervisor(string progSupervisor)
{
	supervisor = progSupervisor;
}

/******************************************************************************
 * SetIncrease
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in percentIncrease to the value
 * passed in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   progIncrease - Programmer's new Percent Increase must be previously
 * 	   				  defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in percentIncrease.
 *****************************************************************************/
void Programmer::SetIncrease(int progIncrease)
{
	percentIncrease = progIncrease;
}

/******************************************************************************
 * SetCPPKnowledge
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in knowsCPP to the value passed
 * in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   progCPP - Programmer's new C++ knowledge must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in knowsCPP.
 *****************************************************************************/
void Programmer::SetCPPKnowledge(bool progCPP)
{
	knowsCPP = progCPP;
}

/******************************************************************************
 * SetJavaKnowledge
 * ----------------------------------------------------------------------------
 * Mutator function. Changes the value stored in knowsJava to the value passed
 * in from main.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   progJava - Programmer's new Java knowledge must be previously defined.
 *
 * POST-CONDITIONS:
 *     This function will store a new value in knowsJava.
 *****************************************************************************/
void Programmer::SetJavaKnowledge(bool progJava)
{
	knowsJava = progJava;
}

/******************************************************************************
 * PrintProgrammer
 * ----------------------------------------------------------------------------
 * This function prints a Programmer object's information in columns using the
 * values stored in the data members and by calling the PrintEmployee()
 * function in the base class.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 	   There are no pre-conditions.
 *
 * POST-CONDITIONS:
 *     This function will print a programmer's information.
 *****************************************************************************/
void Programmer::PrintProgrammer()const
{
	// Calls the PrintEmployee function to print the first part of the
	// programmer's information.
	PrintEmployee();

	// Outputs the headings for each of the columns.
	cout << left
		 <<	setw(NAME)   << " "            << setw(DEPARTMENT)
		 << "Department" << setw(SUPERVISOR) << "Supervisor's" << setw(RAISE)
		 << "Raise"      << setw(KNOWLEDGE)  << "C++"          << setw(KNOWLEDGE)
		 << "Java"       << endl;

	cout <<	setw(NAME)       << " "         << setw(DEPARTMENT) << " "
		 << setw(SUPERVISOR) << "Name"      << setw(RAISE)      << "%"
		 << setw(KNOWLEDGE)  << "Knowledge" << setw(KNOWLEDGE)  << "Knowledge"
		 << endl;

	// Outputs the line denoting the size of each of the columns.
	cout << setw(NAME)   << " " << setw(DEPARTMENT) << "----------"
		 << setw(SUPERVISOR) << "---------------"
		 << setw(RAISE)  << "-----"          << setw(KNOWLEDGE)
		 << "----------" << setw(KNOWLEDGE)  << "----------"  << endl;

	// Outputs the values stored in the data members.
	cout <<	setw(NAME)      << " "              << setw(DEPARTMENT)
		 << departmentNum   << setw(SUPERVISOR) << supervisor << setw(1)
		 << percentIncrease << setw(5)          << "%"  << setw(KNOWLEDGE);

	// Outputs "yes" if the programmer knows C++ or "no" if they do not.
	if(knowsCPP)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	cout << setw(KNOWLEDGE);

	// Outputs "yes" if the programmer knows Java or "no" if they do not.
	if(knowsJava)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	cout << right << endl << endl;
}
