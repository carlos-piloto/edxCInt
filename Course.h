#pragma once
#include "Teacher.h"
#include "Student.h"

class Course
{
public:
	Course();
	~Course();

private:
	Teacher * teacher;
	Student * students[3];
};
