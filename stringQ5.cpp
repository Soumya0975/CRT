#include<iostream>
#include<string>
using namespace std;

int main() {
    string username, password;

    cout << "Enter Username: ";
    getline(cin, username);

    cout << "Enter Password: ";
    getline(cin, password);

    cout << "\nUsername: " << username << endl;
    cout << "Password: " << password << endl;

    return 0;
}
