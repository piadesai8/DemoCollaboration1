// GroupProject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <fstream>

using namespace std;

int main()
{
	// implement main menu - piaclass
	int choice;
	// login implementation version1
	string uname, password, line;
	ifstream userFile;
	bool login = false;
	userFile.open("user.txt", ios::in);
	do
	{
		cout << " Enter 1 for registration"
			<< "\n Enter 2 for Login"
			<< "\n Enter 3 for EXIT : ";
		cin >> choice;
		switch (choice)
		{
				case 1:	
						
						break;
				case 2:
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
						break;
				case 3:
					exit(0);
		}



	} while (choice != 3);
	
	



	return 0;
	
}
