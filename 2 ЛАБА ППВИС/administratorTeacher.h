#pragma once

#ifndef _ADMINISTRATIRTEACHER_H
#define _ADMINISTRATIRTEACHER_H

#include "administrator.h"
#include "teacher.h"
class AdministratorTeacher:  public Teacher,Administrator
{
public:
	AdministratorTeacher(string a_number = "Add information!"): number(a_number)
	{


	}
	void set_number(string number);
	string get_number() { return number; }
private:
	string number;
};
#endif