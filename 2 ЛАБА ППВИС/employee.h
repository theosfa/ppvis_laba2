#pragma once

#ifndef _EMPLOYEE_H
#define  _EMPLOYEE_H

#include "human.h"

class Employee: public Human
{
public:
	Employee(int employee_salary = 0, string employee_position1 = "Add information!") : salary(employee_salary), position(employee_position1)
	{

	}
	void set_position(string position);
	void set_salary(int salary);
	string get_position() { return position; }
	int get_salary() { return salary; }
protected:
	string position;
	int salary;
};
#endif 