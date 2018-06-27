#pragma once

#include <string>

class Teacher
{
public:
	Teacher();
	Teacher(std::string fName, std::string lName, int age, std::string address, std::string city, std::string phone);

	void setFirstName(std::string fName);
	std::string getFristName();

	void setLastName(std::string lName);
	std::string getLastName();

	void setAge(int age);
	int getAge();

	void setAddress(std::string address);
	std::string getAddress();

	void setPhone(std::string phone);
	std::string getPhone();

	void setCity(std::string city);
	std::string getCity();

	void GradeStudent();

	void SitInClass();

	~Teacher();

private:
	std::string firstName;
	std::string lastName;
	std::string address;
	std::string city;
	std::string phone;
	int age;

};