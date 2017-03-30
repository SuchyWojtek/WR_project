#include "stdafx.h"
#include "contacts.h"
#include <fstream>

Contacts::Contacts()
{
	id = 1;
}


Contacts::~Contacts()
{
}

//setname sersurname setemailaddress newcontact deletecontact

void Contacts::setName(std::string name) {
	_name = name;
}

void Contacts::setSurname(std::string surname) {
	_surname = surname;
}

void Contacts::setEmailAddress(std::string emailAddress) {
	_emailAddress = emailAddress;
}

void Contacts::newContact(int id,std::string name, std::string surname, std::string emailAddress) {
	


}