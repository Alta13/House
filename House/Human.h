#pragma once
#include <iostream>

class Human
{
	static unsigned int count_instance;
	unsigned int id;
	char* familia;
	char* name;
	char* otchestvo;

	char* createName(const char* name);
public:

	Human(const char* familia, const char* name, const char* otchestvo) :
		id{ count_instance },
		familia{ familia ? new char[strlen(familia) + 1] : nullptr },
		name{ name ? new char[strlen(name) + 1] : nullptr },
		otchestvo{ otchestvo ? new char[strlen(otchestvo) + 1] : nullptr } {

		if (familia && name && otchestvo)
		{
			strcpy_s(this->familia, strlen(familia) + 1, familia);
			strcpy_s(this->name, strlen(name) + 1, name);
			strcpy_s(this->otchestvo, strlen(otchestvo) + 1, otchestvo);
		}
		count_instance++;
	};

	Human() : Human(nullptr, nullptr, nullptr) {};

	~Human()
	{
		delete[]familia;
		delete[] name;
		delete[] otchestvo;
		count_instance--;
	}

	static unsigned int getCountInstance()
	{
		return count_instance;
	}
	int getId()
	{
		return id;
	}
	char const* getFamilia()
	{
		return familia;
	}
	char const* getName()
	{
		return name;
	}
	char const* getOtchestvo()
	{
		return otchestvo;
	}

	void showHuman();

};
