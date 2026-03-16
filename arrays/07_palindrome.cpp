#include <iostream>
using namespace std;

//Write a function named palindrome that returns a bool.
//The function takes a C-style string str as a parameter and checks whether the string is a palindrome.
//A word is a palindrome if it can be read the same from left to right and from right to left.
//The use of the cstring library is not allowed.

bool palindrome (char str[]) {

    // Computing length of string without the terminator
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Checking if values are different
    for (int i = 0 ; i < length/2; i++) {
        if (str[i] != str[length-1-i]) {
            // If even one value doesn't match, it immediately exists and returns false
            return false;
        }

    }

    // Returning true if the loop condition doesn't trigger
    return true;

}


int main () {

    char str [6] = "level";

    bool result = palindrome (str);
    cout << boolalpha << result;

}