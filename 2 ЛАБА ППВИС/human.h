#pragma once

#ifndef _HUMAN_H
#define _HUMAN_H

#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Human
{
public:
	Human(int  human_growth = 0, int human_weight = 0, int human_age = 0): growth(human_growth), weight(human_weight), age(human_age)
	{

	}
	void set_growth(int growth);
	void set_weight(int weight);
	void set_age(int age);
	int get_growth() { return growth; }
	int get_weight() { return weight; }
	int get_age() { return age; }
protected:
	int growth;
	int weight;
	int age;
};
#endif 