#include <iostream>
using namespace std;

#define MAX 101

bool anagrams (char s1[], char s2[]) {

    int count1[256] = {0};
    int count2[256] = {0};

    int i = 0;
    while (s1[i] != '\0') {
        count1[s1[i]]++;
        i++;
    }

    i = 0;

    while (s2[i] != '\0') {
        count2[s2[i]]++;
        i++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;

}

int main () {

    char s1 [MAX];
    char s2 [MAX];

    cin.getline(s1,MAX);
    cin.getline(s2,MAX);






}