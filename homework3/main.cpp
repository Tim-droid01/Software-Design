#include <iostream>
#include <iomanip>
#include "heartRate.h"
using namespace std;

int main()
{
	HeartRate stuff( "Tim", "Chu", 4, 12, 2001);
	
	const char dash = '-';
	char separator;
	string name,lname;
	int date, month3, year3;

	cout << fixed << setprecision(2);

	cout << "What is your first name? " ;
	getline(cin, name);
	stuff.setFirstName(name);
	
	cout  << "\nWhat is your last name? ";
	getline(cin,lname);
	stuff.setLastName(lname);


	cout << "\nWhen is your birthday? (mm-dd-yyyy) \n";
	cin >> month3 &&
        cin >> separator && separator == dash &&
        cin >> date && 
        cin >> separator && separator == dash && 
	cin >> year3;

	stuff.setDay(date);
	stuff.setMonth(month3);
	stuff.setYear(year3);

	stuff.print();

	cout << "\nYour age is: " << stuff.getAge() 
	     << "\nI have calculated that your maximum heart rate is: " 
	     << stuff.getmaximumHeartRate() << "\nYour target heart rate should be between: "
	     << stuff.getmaxTargetHeartRate() << " and " << stuff.getminTargetHeartRate() << endl << endl;
	
}
