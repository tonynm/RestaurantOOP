#include <iostream>

using namespace std;

#ifndef Employee_h
#define Employee_h

class Employee
{
public:
    /** Constructor **/
    Employee(string name = "", long id = 0, char Class = ' ', long salary = 0);
    /** Input/Output **/
    virtual void display(ostream & out) const;
private:
    string emName;
    long emId;
    char emClass;
    long emSalary;
};

inline Employee::Employee(string name, long id, char Class, long salary)
    : emName(name), emId(id), emClass(Class), emSalary(salary)
{}

inline void Employee::display(ostream & out) const
{
    out << "Employee's name: " << emName << endl
        << "Employee's ID: " << emId << endl
        << "Job position: " << emClass << endl
        << "Employee's salary: " << emSalary << endl;
}

inline ostream & operator<<(ostream & out, const Employee & emp)
{
    emp.display(out);
    return out;
}

#endif // Employee_h
