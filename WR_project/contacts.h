#pragma once
#include <string>
class Contacts
{
private:
	int _id;
	std::string _name;
	std::string _surname;
	std::string _emailAddress;

public:

	void setName(std::string name);
	void setSurname(std::string surname);
	void setEmailAddress(std::string emailAddress);

	void newContact();

	void deleteContact(int id);


	Contacts();
	
	~Contacts();

};

