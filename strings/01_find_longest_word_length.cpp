#include <iostream>
using namespace std;

int findLongestWordLength (char sentence []) {
    int length = 0;
    while (sentence[length] != '\0') {
        length++;
    }

    int maxcount = 0;

    for (int j = 0; j < length; j++) {
        int count = 0;
        bool flag = false;

        for (int i = j; i < length; i++) {

            // As soon as flag it's true, exit the loop, compare and then reset count
            if (sentence[i] == ' ') {
                flag = true;
                break;
            }
            if (!flag) {
                count++;
            }
        }

        // If ' ' condition is triggered, exit inner loop, compare and assign.
        if (count > maxcount) {
            maxcount = count;
        }
    }

    return maxcount;
}

int main () {
    char sentence [100] = "The longest word";
    int result = findLongestWordLength (sentence);
    cout << result;
}