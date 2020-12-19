#pragma once

#ifndef _STUDENT_H
#define _STUDENT_H

#include "human.h"

class Student: public Human
{
public:
	Student(int student_course = 1, string student_specially = "Add information!") : course(student_course), specially(student_specially)
	{

	}
	int get_course() { return course; }
	string get_specially() { return specially; }
	void set_course(int course);
	void set_specially(string specially);
private:
	int course;
	string specially;
};
#endif