#ifndef HEARTRATE_H
#define HEARTRATE_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

class HeartRate
{
	public:
		HeartRate(const string &, const string &, int=0, int=0, int=0);
	
		void setFirstName(const string &);
		string getFirstName() const;

		void setLastName (const string &);
        	string getLastName() const;

		void setDay (int);
		int getDay() const;

		void setMonth (int);
		int getMonth() const;

		void setYear (int);
		int getYear() const;

		
		int getAge() const;
		int getmaximumHeartRate() const;
		double getmaxTargetHeartRate() const;
		double getminTargetHeartRate() const;
		void print() const;
		
		

	private:
		string firstName;
		string lastName;
		int day;
		int month;
		int year;	
};

#endif
