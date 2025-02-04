#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

bool isPalindrome(string a) {
    string b = "";
    for(char c : a) if(isalnum(c)) b += tolower(c);
    string d = b;  reverse(d.begin(), d.end());
    return b == d;
}

void charFrequency(string a) {
    unordered_map<char, int> b;
    for(char c : a) if(isalpha(c)) b[tolower(c)]++;
    cout << "Character Frequency:\n";
    for(auto d : b) cout << d.first << " : " << d.second << "\n";
}

void replaceVowels(string &a, char b) {
    for(char &c : a) if(string("aeiouAEIOU").find(c) != string::npos) c = b;
}

int main() {
    string a;
    cout << "Enter a string: ";
    getline(cin, a);
    if (a.empty()) {
        cout << "Empty string not allowed!";
        return 0;
    }
    cout << (isPalindrome(a) ? "Palindrome\n" : "Not Palindrome\n");
    charFrequency(a);
    replaceVowels(a, '*');
    cout << "Modified String: " << a << "\n";
    return 0;
}
