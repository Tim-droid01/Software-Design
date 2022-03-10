#include <iostream>
#include "heartRate.h"
using namespace std;

HeartRate::HeartRate( const string &first, const string &last, int day2, 
				int month2, int year2)
{
		setFirstName(first);
		setLastName(last);
		setDay(day2);
		setMonth(month2);
		setYear(year2);
}

	void HeartRate::setFirstName(const string &first)
	{
		firstName = first;
	}

	string HeartRate::getFirstName() const 
  	{
      		return firstName;
  	}

  	void HeartRate::setLastName(const string &last)
  	{
      		lastName = last;
  	}

  	string HeartRate::getLastName() const 
  	{
      		return lastName;
  	}

	void HeartRate::setDay(int day2)
	{
		if (day2 >= 0 && day2 <= 31)
			day = day2;
		else 
			throw invalid_argument("Day can't be under 0 or above 31.");
	}

	int HeartRate::getDay() const
	{
		return day;
	}

	void HeartRate::setMonth(int month2)
	{
		if (month2 >= 0 && month2 <= 12)
                        month = month2;
                else 
                        throw invalid_argument("Month can't be under 0 or above 12.");
	}

	 int HeartRate::getMonth() const
        {
                return month;
        }

	void HeartRate::setYear(int year2)
        {
                if (year2 >= 0)
                        year = year2;
                else
                        throw invalid_argument("Year can't be negative");
        }

         int HeartRate::getYear() const
        {
                return year;
        }
	
	int HeartRate::getAge() const
	{
		int age;

		if (month > 4 )
			age = 2021 - year;		
		else 
			age = 2022 - year;

		return age;
	}
	
	int HeartRate::getmaximumHeartRate() const
	{
		int age;

		if (month > 4 )
			age = 2021 - year;		
		else 
			age = 2022 - year;

		return 	220 - age;
	}

	double HeartRate::getmaxTargetHeartRate() const
	{
		int age;

		if (month > 4 )
			age = 2021 - year;		
		else 
			age = 2022 - year;
		
		int maximum = 220 - age;
		double target1 = maximum * .50;
		
		return target1; 
	}
	
	double HeartRate::getminTargetHeartRate() const
        {
                int age;

                if (month > 4 )
                        age = 2021 - year;
                else
                        age = 2022 - year;

                int maximum = 220 - age;
                double target2 = maximum * .85;

                return target2;
        }


	void HeartRate::print() const
	{
		cout << "\nHello " << firstName << ' ' << lastName << "."
		     << "\nYour date of birth is: " << month << "-" << day << "-" << year;
	}



















