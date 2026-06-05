//find length of string without using string function using pointer
#include<iostream>
using namespace std;

void mystrlen(char *);

int main() {
    char a[20];

    cout << "Enter any string: ";
    cin.getline(a, 20);

    mystrlen(a);

    return 0;
}

void mystrlen(char *sl) {
    int length = 0;

    while(*sl != '\0') {
        length++;
        sl++;
    }

    cout << "Length of string = " << length << endl;
}
