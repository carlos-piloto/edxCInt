#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

Teacher::Teacher()
{
}

Teacher::Teacher(std::string fName, std::string lName, int age, std::string address, std::string city, std::string phone)
{
	this->firstName = fName;
	this->lastName = lName;
	this->age = age;
	this->address = address;
	this->city = city;
	this->phone = phone;
}

void Teacher::setFirstName(std::string fName)
{
	this->firstName = fName;
}

std::string Teacher::getFristName()
{
	return this->firstName;
}

void Teacher::setLastName(std::string lName)
{
	this->lastName = lName;
}

std::string Teacher::getLastName()
{
	return this->lastName;
}

void Teacher::setAge(int age)
{
	this->age = age;
}

int Teacher::getAge()
{
	return this->age;
}

void Teacher::setAddress(std::string address)
{
	this->address = address;
}

std::string Teacher::getAddress()
{
	return this->address;
}

void Teacher::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string Teacher::getPhone()
{
	return this->phone;
}

void Teacher::setCity(std::string city)
{
	this->city = city;
}

std::string Teacher::getCity()
{
	return this->city;
}

void Teacher::GradeStudent()
{
	cout << "Student graded" << endl;
}

void Teacher::SitInClass()
{
	cout << "Sitting in main theater" << endl;
}

Teacher::~Teacher()
{
}
