#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    CommissionEmployee employee("sue" , "Jones", "222-22-2222", 10000, .06);
 
    cout << fixed << setprecision(2);

    cout << "Employee information obtained by get functions: \n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is "
         << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSales()
         << "\nCommission rate is " << employee.getCommissionRate() << endl;
 
    employee.setGrossSales(8000);
    employee.setCommissionRate(.1);
 
    cout << "\nUpdated employee information output by print function: \n"
         << endl;
    employee.print();
 
    cout << "\n\nEmployee's earning: $" << employee.earning() << endl;
}
