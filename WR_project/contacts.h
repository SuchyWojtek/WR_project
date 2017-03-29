#pragma once
#include <string>
class Contacts
{
private:
	std::int _id
	std::string _name;
	std::string _surname;
	std::string _emailAddress;

public:

	void setName(std::string name);
	void setSurname(std::string surname);
	void setEmailAddress(std::string emailAddress);

	void newContact();

	void deleteContact(std::int id);


	Contacts();
	
	~Contacts();

};

