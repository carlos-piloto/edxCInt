#include "stdafx.h"
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student()
{
}

Student::Student(std::string fName, std::string lName, int age, std::string address, std::string city, std::string phone)
{
	this->firstName = fName;
	this->lastName = lName;
	this->age = age;
	this->address = address;
	this->city = city;
	this->phone = phone;
}

void Student::setFirstName(std::string fName)
{
	this->firstName = fName;
}

std::string Student::getFristName()
{
	return this->firstName;
}

void Student::setLastName(std::string lName)
{
	this->lastName = lName;
}

std::string Student::getLastName()
{
	return this->lastName;
}

void Student::setAge(int age)
{
	this->age = age;
}

int Student::getAge()
{
	return this->age;
}

void Student::setAddress(std::string address)
{
	this->address = address;
}

std::string Student::getAddress()
{
	return this->address;
}

void Student::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string Student::getPhone()
{
	return this->phone;
}

void Student::setCity(std::string city)
{
	this->city = city;
}

std::string Student::getCity()
{
	return this->city;
}

void Student::SitInClass()
{
	cout << "Sitting at front of class" << endl;
}

Student::~Student()
{
}
