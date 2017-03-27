#include "stdafx.h"
#include "Login.h"
#include <fstream>
#include <string>
#include "md5.h"


Login::Login()
{
}


Login::~Login()
{
}


void Login::verifyLogin(std::string login, std::string password)
{
	std::ifstream log;
	log.open("Logins.txt");
	std::ifstream pass;
	pass.open("Passwords.txt");
	
	bool was = false;
	int id=0;
	std::string l,p;
	
	while(!log.eof())
	{
		id+=1;
		log >> l;
		pass >> p;
		
		if(l == login && p == md5(password))
		{
			_login = login;
			_password = password;
			_id = id;
			was = true;
		}
	}
	
	if (was == false)
	{
		_id = -1; // jesli id jest -1 to wtedy zle logowanie
	}

	pass.close();
	log.close();
}
