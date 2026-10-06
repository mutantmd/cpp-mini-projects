#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i])) {
            count++;
        }
    }
    return count;
}

int bestWordIndex(string words[], int length) {
    int bestIndex = 0;
    int maxVowels = countVowels(words[0]);

    for (int i = 1; i < length; i++) {
        int currentVowels = countVowels(words[i]);
        if (currentVowels > maxVowels) {
            maxVowels = currentVowels;
            bestIndex = i;
        }
    }

    return bestIndex;
}

int main() {
    string words[] = {"sky", "ocean", "rhythm", "aerial"};
    int length = sizeof(words) / sizeof(words[0]);

    int idx = bestWordIndex(words, length);
    cout << "Word with most vowels: " << words[idx] << " (index " << idx << ")" << endl;

    return 0;
}