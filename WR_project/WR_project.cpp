// WR_project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "headers.h"
#include "Login.h"
#include "contacts.h"
#include "md5.h"

using namespace std;

void chooseOperation(int operation)
{
	Login l;
	string login;
	string password = "";
	string confirmPassword = "";
	char c;
	bool confirm = false;

	switch (operation)
	{
	case 1:
	{
		cout << "Login: ";
		cin >> login;
		while(!confirm)
		{
			cout << "Password: ";
			while (c = _getch() != 13)
			{
				cout << "*";
				password += c;
			}
			cout << "\nConfirm Password: ";
			while (c = _getch() != 13)
			{
				cout << "*";
				confirmPassword += c;
			}
			if (password == confirmPassword)
			{
				l.newAccount(login, password);
				confirm = true;
			}
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
	string menu = "\n[1] sign up\n[2] sign in\n";

	cout << menu << "Choose operation: ";
	cin >> operation;

	chooseOperation(operation);

}

int main()
{
	while(1)
	{
		menu();
	}
	_getch();
    return 0;
}
