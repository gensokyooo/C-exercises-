#include <iostream>
using namespace std;

void reverseString (char str[]) {

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length/2; i++) {
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }

}

int main () {

    char str [6] = "Hello";
    reverseString(str);
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];

    }
}