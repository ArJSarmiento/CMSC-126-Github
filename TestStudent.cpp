// C++ Programming Assignment 4 by Arnel Jan Sarmiento

// for standard I/O
#include <iostream>
using namespace std;

// for string class
#include <string>

// import classes
#include "Person.h"
#include "Student.h"

int main()
{
    // initialize string variables
    Student s;
    string fname, lname, gender, emailAdd, cpNumber, studentNum, course, department, college;

    // program summary
    cout
        << "\nThis program will do do do, da da da..........................."
        << "\nProgrammed by: Arnel Jan Sarmiento"
        << endl;

    // accept input
    cout << "\nStudent First Name: ";
    getline(cin, fname);
    cout << "Student Last Name: ";
    getline(cin, lname);
    cout << "Student Gender: ";
    getline(cin, gender);
    cout << "Student Email Address: ";
    getline(cin, emailAdd);
    cout << "Student Phone Number: ";
    getline(cin, cpNumber);
    cout << "Student Number: ";
    getline(cin, studentNum);
    cout << "Course: ";
    getline(cin, course);
    cout << "Department: ";
    getline(cin, department);
    cout << "College: ";
    getline(cin, college);

    // set Student attributes
    s.setFname(fname);
    s.setLname(lname);
    s.setGender(gender);
    s.setEmailAdd(emailAdd);
    s.setCpNumber(cpNumber);
    s.setStudentNum(studentNum);
    s.setCourse(course);
    s.setDepartment(department);
    s.setCollege(college);

    // display student attributes with object getters
    cout << "\nHi, " << s.getFname()
         << " "
         << s.getLname()
         << ", "
         << s.getGender()
         << ". Welcome to UP Mindanao and congratulations! We are pleased to inform you that you are admitted in the "
         << s.getCourse()
         << " program under the "
         << s.getDepartment()
         << ", "
         << s.getCollege()
         << ". Your Student number is "
         << s.getStudentNum()
         << "."
         << " Your contact information is as follows: "
         << s.getEmailAdd()
         << ", "
         << s.getCpNumber()
         << "."
         << endl;

    return 0;
}