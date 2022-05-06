// C++ Programming Assignment 4 by Arnel Jan Sarmiento

// for standard I/O
#include <iostream>
using namespace std;

// for string class
#include <string>

// import classes
#include "Person.h"
#include "Employees.h"

int main()
{
    // initialize string variables
    Employees h;
    string fname, lname, gender, emailAdd, cpNumber, empNum, Position, Office;
    float Salary;

    // program summary
    cout
        << "\nThis program will do do do, da da da..........................."
        << "\nProgrammed by: Arnel Jan Sarmiento"
        << endl;

    // accept input
    cout << "\nEmployee First Name: ";
    getline(cin, fname);
    cout << "Employee Last Name: ";
    getline(cin, lname);
    cout << "Employee Gender: ";
    getline(cin, gender);
    cout << "Employee Email Address: ";
    getline(cin, emailAdd);
    cout << "Employee Phone Number: ";
    getline(cin, cpNumber);
    cout << "Employee Number: ";
    getline(cin, empNum);
    cout << "Position: ";
    getline(cin, Position);
    cout << "Office: ";
    getline(cin, Office);
    cout << "Salary: ";
    cin >> Salary;

    // set employee attributes
    h.setFname(fname);
    h.setLname(lname);
    h.setGender(gender);
    h.setEmailAdd(emailAdd);
    h.setCpNumber(cpNumber);
    h.setEmpNum(empNum);
    h.setPosition(Position);
    h.setOffice(Office);
    h.setSalary(Salary);

    // display employee attributes with object getters
    cout << "\nHello, "
         << h.getFname()
         << " "
         << h.getLname()
         << "! Your employee number is "
         << h.getEmpNum()
         << ". You work at the "
         << h.getOffice()
         << " as a "
         << h.getPosition()
         << " with a salary of "
         << h.getSalary()
         << " pesos."
         << " Your contact information is as follows: "
         << h.getEmailAdd()
         << ", "
         << h.getCpNumber()
         << "."
         << endl;

    return 0;
}