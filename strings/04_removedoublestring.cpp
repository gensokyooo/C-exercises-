#include <iostream>
using namespace std;

void removeDoubleString (char str[], char b[], int length) {

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


#define MAX 100
int main () {
    char str [] = "aabbcc";
    char b [7];

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    char a[MAX];
    cin.getline(a,MAX);

    int length_of_a = 0;
    while (str[length_of_a] != '\0') {
        length_of_a++;
    }

    removeDoubleString (a, b, length_of_a);




}