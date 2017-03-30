// WR_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Login.h"
#include "contacts.h"
#include "md5.h"
#include "string"

using namespace std;

void chooseOperation(int operation)
{
	Login l;
	string login;
	string password = "";
	string confirmPassword = "";
	char c;

	switch (operation)
	{
	case 1:
	{
		cout << "Login: ";
		cin >> login;
		cout << "Password: ";
		while (c = _getch() != 13)
		{
			cout << "*";
			password += c;
		}
		cout << "Confirm Password: ";
		while (c = _getch() != 13)
		{
			cout << "*";
			confirmPassword += c;
		}
		if (password == confirmPassword)
		{
			l.newAccount(login,password);
		}
		break;
	}
	case 2:
	{
		cout << "Login: ";
		cin >> login;
		cout << "Password: ";
		while (c = _getch() != 13)
		{
			cout << "*";
			password += c;
		}
		l.verifyLogin(login, password);
		break;
	}
	default: {}
	}
}

void menu()
{
	int operation;
	string menu = "[1] sign up\n[2] sign in\n";

	cout << menu << "Choose operation: ";
	cin >> operation;

	chooseOperation(operation);

}

int main()
{
	
	
	_getch();
    return 0;
}
