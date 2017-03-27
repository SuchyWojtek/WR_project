#pragma once
#include <string>

class Login
{
private:
	std::string _login;
	std::string _password;
	
public:
	int _id; // jesli jest -1 to zle dane logowania
	void verifyLogin(std::string login, std::string password);
	Login();
	~Login();
};

