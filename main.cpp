/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #2 : Employee - Inheritance
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/06/2017
* ****************************************************************************/

#include "Programmer.h"
#include "SoftwareArchitect.h"

/******************************************************************************
 * EMPLOYEE - INHERITANCE
 * ----------------------------------------------------------------------------
 * This program will utilize Date, Employee, Programmer, and Software Architect
 * classes to print information about an employee. The Programmer and Software
 * classes will inherit from the Employee class which uses composition in order
 * to include the hire date. Each of the class have two objects created: one
 * that calls the default constructor and one that calls the non-default
 * constructor. Finally, to demonstrate the mutator functions, the information
 * of the object that called the default constructor will be change and
 * printed again.
 * ----------------------------------------------------------------------------
 * INPUT:
 *    There are is no input.
 *
 * OUTPUT:
 *    Employee         -  name, id, phone, age, gender, jobTitle, salary,
 *    					  hireDate
 *    Programmer        - All Employee class data members also including
 *    					  departmentNum, supervisor, percentIncrease,
 *    					  knowsCPP, knowsJava
 *    SoftwareArchitect - All Employee class data members also including
 *    					  departmentNum, supervisor, percentIncrease,
 *    					  yearsOfExperience
 *****************************************************************************/

/******************************************************************************
 * PrintHeader
 *    This function prints the project header.
 *****************************************************************************/
void PrintHeader(string labName, char labType, int labNum);

int main()
{
	Employee employee;
	Employee barrackObama("Barack Obama", 12346, "310-555-5555", 51,
						  'M', "Comedian", "70,123", 5, 8, 2015);

	Programmer programmer;
	Programmer samSoftware("Sam Software", 54321, "819-123-4567", 21, 'M',
						   "Programmer", "223,000", 12, 24, 2011, 5432122,
						   "Joe Boss", 4, true, false);

	SoftwareArchitect softwareArchitect;
	SoftwareArchitect alexArch("Alex Arch", 88888,
							   "819-123-4444", 31, 'M', "Architect", "323,000",
							   12, 24, 2009, 5434222, "Big Boss", 5, 4);

	PrintHeader("Employee Inheritance", 'A', 2);

	cout << "Employee object calling the default constructor:\n";
	employee.PrintEmployee();

	cout << "Employee object calling the non-default constructor:\n";
	barrackObama.PrintEmployee();

	cout << "Programmer object calling the default constructor:\n";
	programmer.PrintProgrammer();

	cout << "Programmer object calling the non-default constructor:\n";
	samSoftware.PrintProgrammer();

	cout << "Software Architect object calling the default constructor:\n";
	softwareArchitect.PrintSoftwareArchitect();

	cout << "Software Architect object calling the non-default constructor:\n";
	alexArch.PrintSoftwareArchitect();

	// Calls the mutator functions of the Employee class to set all data
	// members of the first Employee object to new values.
	employee.SetName("Hillary Clinton");
	employee.SetID(77777);
	employee.SetPhone("203-555-6789");
	employee.SetAge(58);
	employee.SetGender('F');
	employee.SetTitle("News Reporter");
	employee.SetSalary("500,500");
	employee.SetDate(3, 1, 2005);

	cout << "First Employee object after changing the data members:\n";
	employee.PrintEmployee();

	// Calls the mutator functions of the Programmer class to set all data
	// members of the first Programmer object to new values.
	programmer.SetDepartment(6543222);
	programmer.SetSupervisor("Mary Leader");
	programmer.SetIncrease(7);
	programmer.SetCPPKnowledge(true);
	programmer.SetJavaKnowledge(true);
	programmer.SetName("Mary Coder");
	programmer.SetID(65432);
	programmer.SetPhone("310-555-5555");
	programmer.SetAge(28);
	programmer.SetGender('F');
	programmer.SetTitle("Programmer");
	programmer.SetSalary("770,123");
	programmer.SetDate(2, 8, 2010);

	cout << "First Programmer object after changing the data members:\n";
	programmer.PrintProgrammer();

	// Calls the mutator functions of the SoftwareArchitect class to set all
	// data members of the first SoftwareArchitect object to new values.
	softwareArchitect.SetDepartment(6543422);
	softwareArchitect.SetSupervisor("Big Boss");
	softwareArchitect.SetIncrease(8);
	softwareArchitect.SetExperience(11);
	softwareArchitect.SetName("Sally Designer");
	softwareArchitect.SetID(87878);
	softwareArchitect.SetPhone("310-555-8888");
	softwareArchitect.SetAge(38);
	softwareArchitect.SetGender('F');
	softwareArchitect.SetTitle("Architect");
	softwareArchitect.SetSalary("870,123");
	softwareArchitect.SetDate(2, 8, 2003);

	cout << "First Software Architect object after changing the data members:\n";
	softwareArchitect.PrintSoftwareArchitect();

	return 0;
}

/******************************************************************************
 * PrintHeader
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     labName - Lab Name has to be preciously defined
 *     labType -  Lab Type has to be preciously defined
 *     labNum  - Lab Number has to be preciously defined
 *
 * POST-CONDITIONS:
 *     This function will print the class heading.
 *****************************************************************************/
void PrintHeader(string labName, char labType, int labNum)
{
	cout << left;
	cout << "************************************************\n";
	cout << "* PROGRAMMED BY  : Jesus Sanchez";
	cout << "\n* " << setw(15) << "STUDENT ID" << ": 1024834" ;
	cout << "\n* " << setw(15) << "CLASS" << ": MW: 1:30pm - 2:50pm";
	cout << "\n* ";

	if(toupper(labType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}

	cout << labNum << " : " << labName;
	cout << "\n************************************************\n\n";
	cout << right;
}
