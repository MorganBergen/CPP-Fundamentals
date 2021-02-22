
//This is the IMPLEMENTATION FILE: employee.cxx 
//This is the IMPLEMENTATION for the class Employee.
//The interface for the class Employee is in the header file employee.h.
#include <iostream>
#include <string>
#include <cstdlib>
#include "employee.h"
using namespace std;

namespace savitchemployees
{

    Employee::Employee() // default is to fetch data from keyboard
    {
        cout << "Enter employee name, followed by return.:\n";
        getline(cin, name); 
        cout		<< endl << "Enter employee social security number,"
            		<< " followed by return.:\n"; 
        getline(cin, ssn); 
        cin.ignore(10000, '\n');
        cout << endl;
    }

    Employee::Employee(string new_name, string new_number) : 
        name(new_name), ssn(new_number) //initializer list
    {			
        //deliberately empty
    }
    
    string Employee::get_name() 
    { 
        return name;
    }

    string Employee::get_ssn() 
    { 
        return ssn;
    }

    void Employee::change_name(string new_name)
    {
        name = new_name;
    }

    void Employee::change_ssn (string new_ssn)
    {
        ssn = new_ssn;
    }

    void Employee::print_check() 
    { 
        cout		<< "\nERROR: print_check FUNCTION CALLED FOR AN \n"
            		<< "UNDIFFERENTIATED EMPLOYEE. Aborting the program.\n" 
            << "Check with the author of the program about this bug.\n";
        exit(1);
    }

    void Employee::give_raise(double amount)
    {
        cout << "\nERROR: give_raise FUNCTION CALLED FOR AN \n"
             		<< "UNDIFFERENTIATED EMPLOYEE. Aborting the program.\n" 
             << "Check with the author of the program about this bug.\n";
        exit(1);
    }

}//savitchemployees