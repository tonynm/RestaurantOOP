#include <iostream>
#include "Employee.h"

#ifndef Waiter_h
#define Waiter_h

class Waiter : public Employee
{
public:
    Waiter (string name = "", long id = 0, char Class = ' ',
           long salary = 0, int yOS = 0);
    virtual void display(ostream & out) const;
private:
    int yearsOfService;
};

inline Waiter::Waiter(string name, long id, char Class, long salary, int yOS)
: Employee(name, id, Class, salary), yearsOfService(yOS)
{}

inline void Waiter::display(ostream & out) const
{
    Employee::display(out);
    out << "This waiter has worked at the restaurant for: " << yearsOfService << " years" << endl
        << "----------------------------------------------------------------------" << endl;
}
#endif // Waiter_h
