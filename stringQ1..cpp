#include<iostream>
using namespace std;

int main() {
    char name[10];
    int i = 0;

    cout << "Enter name: ";

    while(i < 9) {
        name[i] = getchar();
        i++;
    }

    name[i] = '\0';

    cout << "Name is: " << name;

    return 0;
}
