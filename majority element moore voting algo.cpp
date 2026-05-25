//Moore’s Voting Algorithm is used to find the majority element in an array.
//A majority element is an element that appears more than n/2 times.
//For the array:3 3 4 2 4 4 2 4 4
#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = 9;
    int candidate = -1;
    int count = 0;

    // Moore Voting Algorithm
    for (int i = 0; i < n; i++) {

        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }

        else if (arr[i] == candidate) {
            count++;
        }

        else {
            count--;
        }
    }

    // Verification step
    count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        cout << "Majority Element = " << candidate;
    else
        cout << "No Majority Element";

    return 0;
}
