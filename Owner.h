#include <iostream>
#include "Employee.h"

#ifndef Owner_h
#define Owner_h

class Owner : public Employee
{
public:
    Owner (string name = "", long id = 0, char Class = ' ',
           long salary = 0, int ownershipYears = 0);
    virtual void display(ostream & out) const;

private:
    int yearsOwned;
};

inline Owner::Owner(string name, long id, char Class, long salary, int ownershipYears)
: Employee(name, id, Class, salary), yearsOwned(ownershipYears)
{}

inline void Owner::display(ostream & out) const
{
    Employee::display(out);
    out << "The owner has owned this restaurant for: " << yearsOwned << " years" << endl
        << "----------------------------------------------------------------------" << endl;
}


#endif // Owner_h
