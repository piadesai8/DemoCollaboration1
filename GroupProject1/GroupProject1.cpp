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
	string uname, password, line, regUname, regPwd;
	ofstream ufile;
	ifstream userFile;
	bool login = false;
	
	do
	{
		cout << " Enter 1 for registration"
			<< "\n Enter 2 for Login"
			<< "\n Enter 3 for EXIT : ";
		cin >> choice;
		switch (choice)
		{
				case 1:	
						ufile.open("user.txt", ios::app);
						cout << "\n Enter Registration Details: \n";
						cout << " Enter Username: ";
						cin >> regUname;
						cin.ignore();
						cout << " Enter Password: ";
						cin >> regPwd;
						ufile << regUname << " " << regPwd << endl;
						ufile.close();						
						break;
				case 2:
						login = false;
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
						break;
				case 3:
					exit(0);
		}



	} while (choice != 3);
	
	
	// randome feature code
	//random feature code for testing 


	return 0;
	
}
