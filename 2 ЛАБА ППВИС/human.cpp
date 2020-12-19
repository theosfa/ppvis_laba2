#include "human.h"

void Human::set_growth(int growth)
{
	(growth < 0) ? this->growth = 0 : this->growth = growth;
}

void Human::set_weight(int weight)
{
	(weight < 0) ? this->weight = 0 : this->weight = weight;
}

void Human::set_age(int age)
{
	(age < 0) ? this->age = 0 : this->age = age;
}