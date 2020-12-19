#pragma once
#include "human.h"
#include "student.h"
#include "alumnus .h"
#include "employee.h"
#include "faculty.h"
#include "administrator.h"
#include "stuff.h"
#include "teacher.h"
#include "administratorTeacher.h"

class Tests 
{
public:
	Tests()
	{ 
		Human test;
		human( test);
		Student test1;
		student(test1);
		Alumnus test3;
		alumnus(test3);
		Employee test4;
		employee(test4);
		Faculty test5;
		faculty(test5);
		Administrator test6;
		administrator(test6);
		Stuff test7;
		stuff(test7);
		Teacher test8;
		teacher(test8);
		AdministratorTeacher test9;
		administratorteacher(test9);
	}
	void administrator(Administrator test);
	void administratorteacher(AdministratorTeacher test);
	void alumnus(Alumnus test);
	void employee(Employee test);
	void faculty(Faculty test);
	void human(Human test);
	void student(Student test);
	void stuff(Stuff tets);
	void teacher(Teacher test);
private:
};

