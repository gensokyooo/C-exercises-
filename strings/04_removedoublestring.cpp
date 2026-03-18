#include <iostream>
using namespace std;

void removeDoubleString (char str[], char b[], int const length) {

    int count = 0;
    for (int i = 0; i < length+1; i ++) {

        // Resetting for each index
        int occurrences = 0;

        // Counting occurrences
        for (int j = i; j < length+1; j ++) {
            if (str[i] == str[j]) {
                occurrences++;
            }
        }
        if (occurrences == 1) {
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

    removeDoubleString (str,b,length);
    int lengthb = 0;
    while (b[lengthb] != '\0') {
        lengthb++;
    }

    for (int i = 0; i < lengthb; i++) {
        cout << b[i];
    }

}