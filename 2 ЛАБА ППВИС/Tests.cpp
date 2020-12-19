#include "Tests.h"

void Tests::administrator(Administrator test)
{
	test.set_science_degree("bachelor");
	cout << "Administrator: science degree " << test.get_science_degree() << endl;
}

void Tests::administratorteacher(AdministratorTeacher test)
{
	test.set_number("+333322112343");
	cout << "AdministratorTeacher: number " << test.get_number()<<endl;
}

void Tests::alumnus(Alumnus test)
{
	test.set_red_diploma(1);
	test.set_year_of_issue(2014);
	cout << "Alumnus: red diploma " << test.get_red_diploma() << " year of issue " << test.get_year_of_issue() << endl;
}

void Tests::employee(Employee test)
{
	test.set_position("teacher");
	test.set_salary(1000);
	cout << "Employee: position " << test.get_position() << " salary " << test.get_salary() << endl;
}

void Tests::faculty(Faculty test)
{
	test.set_university_faculty("fitu");
	cout << "Faculty: university faculty " << test.get_university_faculty() << endl;
}

void Tests::human(Human test)
{
	test.set_age(19);
	test.set_growth(180);
	test.set_weight(76);
	cout << "Human: age " << test.get_age() << " growth " << test.get_growth() << " weight " << test.get_weight() << endl;
}

void Tests::student(Student test)
{
	test.set_course(1);
	test.set_specially("fitu");
	cout << "Student: course " << test.get_course() << " specially " << test.get_specially()<< endl;
}

void Tests::stuff(Stuff test)
{
	test.set_place_of_work("4b");
	cout << "Stuff: place of work " << test.get_place_of_work() << endl;
}

void Tests::teacher(Teacher test)
{
	test.set_chair(":)");
	cout << "Teacher: chair " << test.get_chair()<<endl;
}

