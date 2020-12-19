#pragma once

#ifndef _ADMINISTRATOR_H
#define _ADMINISTRATOR_H

#include "faculty.h"

class Administrator : virtual public Faculty
{
public:
	Administrator(string administrator_science_degree = "Add information!") : science_degree(administrator_science_degree)
	{
	
	}
	void set_science_degree(string science_degree);
	string get_science_degree() { return science_degree; }
protected:
	string science_degree;
};
#endif