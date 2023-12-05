#pragma once
#include <iostream>
#include <Windows.h>
#include"Flat.h"

class House
{
public:
	size_t kol_apart;	
	size_t kol_pod;		

	Flat* apartment;
	House(size_t& kol_apart, size_t& kol_pod, Flat* apartment) :
		kol_apart{ 0 }, kol_pod{ 0 }, apartment{ apartment }
	{
		if (kol_apart >= 1 && kol_apart <= 90) {
			this->kol_apart = kol_apart;
		}
		if (kol_pod >= 1 && kol_pod <= 2) {
			this->kol_pod = kol_pod;
		}
	}

	House() : kol_apart(90), kol_pod(1) {}

	void showHouse()
	{
		cout << "Êגאנעטנ ג המלו: " << kol_apart << ", ןמהתוחהמג ג המלו " << kol_pod << endl;
		cout << endl;
	}

};