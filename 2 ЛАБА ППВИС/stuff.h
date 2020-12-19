#pragma once

#ifndef _STUFF_H
#define _STUFF_H

#include "employee.h"

class Stuff: public Employee
{
public:
	Stuff(string stuff_place_of_work="Add information!"): place_of_work(stuff_place_of_work)
	{
	
	}
	void set_place_of_work(string place_of_work);
	string get_place_of_work() { return place_of_work; }
private:
	string place_of_work;
};
#endif