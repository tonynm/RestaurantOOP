#include <iostream>
#include "Employee.h"

#ifndef Chef_h
#define Chef_h

class Chef : public Employee
{
public:
    Chef (string name = "", long id = 0, char Class = ' ',
           long salary = 0, string specialty = "");
    virtual void display(ostream & out) const;
private:
    string expertise;
};

inline Chef::Chef(string name, long id, char Class, long salary, string specialty)
: Employee(name, id, Class, salary), expertise(specialty)
{}

inline void Chef::display(ostream & out) const
{
    Employee::display(out);
    out << "This chef's expertise is in: " << expertise << " cuisine" << endl
        << "----------------------------------------------------------------------" << endl;
}
#endif // Chef_h
