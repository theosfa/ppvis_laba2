#pragma once

#ifndef _ALMUNUS_H
#define _ALMUNUS_H

#include "human.h"

class Alumnus: public Human
{
public:
	Alumnus(int alumnus_year_of_issue = 0, bool alumnus_red_diploma = 0) : year_of_issue(alumnus_year_of_issue), red_diploma(alumnus_red_diploma) 
	{
	
	}
	void set_year_of_issue(int year_of_issue);
	void set_red_diploma(bool red_diploma);
	int get_year_of_issue() { return year_of_issue; }
	bool get_red_diploma() { return red_diploma; }
private:
	int year_of_issue;
	bool red_diploma;
};
#endif