#include "stdafx.h"
#include "contacts.h"
#include "headers.h"


Contacts::Contacts()
{
	_id = 1;
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
	
	setName(name);
	setSurname(surname);
	setEmailAddress(emailAddress);

	std::fstream contacts;
	contacts.open("contacts.txt", std::ios::out | std::ios::app);

	contacts << _id << ';' << _name << ';' << _surname << ';' << _emailAddress <<  std::endl;

	contacts.close();

	_id++;
}