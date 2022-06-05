// GroupProject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <fstream>

using namespace std;

int main()
{
	// login implementation version1
	string uname, password,line;
	ifstream userFile;
	bool login = false;
	userFile.open("user.txt", ios::in);


	cout << "Enter Username: ";
	cin >> uname;
	cin.ignore();
	cout << "Enter Password: ";
	cin >> password;
	while (getline(userFile, line))
	{
		if (line.find(uname) != string::npos && line.find(password) != string::npos)
			login = true;		
	}
	if (login)
		cout << "\n Login Successful!!";
	else
		cout << "\n Wrong username or password!";
	userFile.close();
}
