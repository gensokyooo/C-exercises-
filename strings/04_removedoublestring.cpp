#include <iostream>
using namespace std;

void removeDoubleString (char str[], char b[], int length) {

    // Add the letter first time it appears
    // If it's already in b
    // Don't
    int count = 0;
    for (int i = 0; i < length+1; i++) {
        bool appeared = false;
        for (int j = 0; j < count; j++) {
            if (str[i] == b[j]) {
                appeared = true;
                break;
            }
        }
        if (!appeared) {
            b[count++] = str[i];
        }
    }
}



int main () {


    char str [] = "aabbcc";
    char b [7];

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }



}