#pragma once


#ifndef _TEACHER_H
#define _TEACHER_H

#include "faculty.h"

class Teacher: virtual public Faculty
{
public:
	Teacher(string teacher_chair = "Add information!"): chair(teacher_chair)
	{
		
	}
	void set_chair(string chair);
	string get_chair() { return chair; }
protected:
	string chair;
};
#endif
