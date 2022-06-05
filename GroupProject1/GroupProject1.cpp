// GroupProject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <fstream>

using namespace std;

int main()
{
	//registration -piawork
	
	
	// login implementation version1 
	string uname, password,line, regUname,regPwd;
	ofstream ufile;
	ifstream userFile;
	bool login = false;
	char choice;
	userFile.open("user.txt", ios::in);
	ufile.open("user.txt", ios::app);
	cout << "\n Enter Registration Details: \n";
	cout << " Enter Username: ";
	cin >> regUname;
	cin.ignore();
	cout << " Enter Password: ";
	cin >> regPwd;
	ufile << regUname << " " << regPwd << endl;
	ufile.close();
	cout << "\n Do you want to login? (y/n)\n";
	cin >> choice;
	if (choice == 'y')
	{
		cout << " Enter Username: ";
		cin >> uname;
		cin.ignore();
		cout << " Enter Password: ";
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
	else
	{
		cout << "\n\n Thank you!!";
	}
}
