#include <iostream>
#include <list>
#include "Employee.h"
#include "Owner.h"
#include "Chef.h"
#include "Waiter.h"

using namespace std;

int main()
{
    long profit;
    int tips;
    int tips2;
    int tips3;
    long salary;
    long salary2;
    long salary3;
    long salary4;
    long salary5;
    long salary6;
    Employee * ptr;
    list<Employee*> empList;

    cout << "Welcome to the restaurant, Stile. There are 6 employees in total in this restaurant. "
         << endl << "The positions of the 6 employees are as follows: one owner, two chefs, and three waiters. "
         << endl << "The profit of the restaurants and the waiters' tips need to be inputted. \n"
         << endl;

    cout << "-----------------------------------------------WARNING---------------------------------------------" << endl
         << "IF THE PROFIT DOES NOT MEET 44000, THE PAY FOR EACH WORKER WILL BE REDUCED BY A CERTAIN PERCENTAGE" << endl
         << "What should the profit of the restaurant be?" << endl;
    cin >> profit;
    cout << endl;

    cout << "How much would you like to tip waiter #1?" << endl;
    cin >> tips;
    cout << endl;

    cout << "How much would you like to tip waiter #2?" << endl;
    cin >> tips2;
    cout << endl;

    cout << "How much would you like to tip waiter #3?" << endl;
    cin >> tips3;
    cout << endl;

    if(profit < 44000)
    {
        salary = 15000 - (.35*profit);
        salary2 = 10000 - (.25*profit);
        salary3 = 10000 - (.25*profit);
        salary4 = (3000 - (.05*profit)) + tips;
        salary5 = (3000 - (.05*profit)) + tips2;
        salary6 = (3000 - (.05*profit)) + tips3;
    }
    else if(profit > 44000)
    {
        salary = 15000 + (.6*profit);
        salary2 = 10000 + (.2*profit);
        salary3 = salary2;
        salary4 = 3000 + tips;
        salary5 = 3000 + tips2;
        salary6 = 3000 + tips3;
    }
    else if(profit == 44000)
    {
        salary = 15000;
        salary2 = 10000;
        salary3 = 10000;
        salary4 = 3000 + tips;
        salary5 = 3000 + tips2;
        salary6 = 3000 + tips3;
    }

    ptr = new Owner("Eugene Krabs", 987123456, 'O', salary, 19);
    empList.push_back(ptr);

    ptr = new Chef("Spongebob Squarepants", 330199800, 'C', salary2, "Filipino");
    empList.push_back(ptr);
    ptr = new Chef("Patrick Star", 123456789, 'C', salary3, "American");
    empList.push_back(ptr);

    ptr = new Waiter("You Watanabe", 987654321, 'W', salary4, 5);
    empList.push_back(ptr);

    ptr = new Waiter("Ben Tennyson", 756890231, 'W', salary5, 9);
    empList.push_back(ptr);

    ptr = new Waiter("Chester Bennington", 320197600, 'W', salary6, 15);
    empList.push_back(ptr);

    cout << "The information of each employee will now be displayed.\n" << endl;
    cout << "----------------------------------RESTAURANT STILE EMPLOYEE STATISTICS---------------------------------" << endl;
    for (list<Employee*>::iterator it = empList.begin(); it != empList.end(); it++)
    {
        ptr = *it;
        cout << *ptr << endl;
    }

    return 0;
}
