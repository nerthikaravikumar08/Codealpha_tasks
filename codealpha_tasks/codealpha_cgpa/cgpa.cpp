#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int choice;
    string username, password;
    string storedUser, storedPass;

    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
    {
        ofstream file("user.txt", ios::app);

        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        file << username << " " << password << endl;

        file.close();

        cout << "Registration successful!\n";
    }

    else if(choice == 2)
    {
        ifstream file("user.txt");

        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        bool found = false;

        while(file >> storedUser >> storedPass)
        {
            if(username == storedUser && password == storedPass)
            {
                found = true;
                break;
            }
        }

        file.close();

        if(found)
        cout << "Login successful!\n";
        else
        cout << "Login failed!\n";
    }

    else
    {
        cout << "Invalid choice";
    }

    return 0;
}