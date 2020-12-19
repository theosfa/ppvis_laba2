#pragma once

#ifndef _FACULTY_H
#define _FACULTY_H

#include "employee.h"

class Faculty: public Employee
{
public:
	Faculty(string faculty="Add information!"): university_faculty(faculty)
	{
	
	}
	void set_university_faculty(string university_faculty);
	string get_university_faculty() { return university_faculty; }
protected:
	string university_faculty;
};
#endif