#include <iostream>
using namespace std;

//Problem: Write a function revert that takes a C-style string str as a parameter and returns a
//new string representing the reversed version of str.
//For example, if str is "hello", the function should return "olleh".

    void revert (char str [], char b[]) {

        // Computing length
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }

        // Reversing
        for (int i = 0; i < length / 2; i ++) {
            char temp = str[i];
            str[i] = str[length-1-i];
            str[length-1-i] = temp;
        }

        for (int i = 0; i < length; i ++) {
            b[i] = str[i];
        }
    }

int main () {

    char str [] = "Hello";
        char b[6];
        revert (str,b);

}