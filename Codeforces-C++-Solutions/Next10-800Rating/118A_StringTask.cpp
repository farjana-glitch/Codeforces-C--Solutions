#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        // অক্ষরটিকে ছোট হাতের অক্ষরে রূপান্তর করা
        char c = tolower(s[i]);

        // চেক করা অক্ষরটি ভাওয়েল (a, e, i, o, u, y) কি না
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue; // ভাওয়েল হলে বাদ যাবে
        } else {
            // কনসোনেন্ট হলে প্রথমে '.' এবং তারপর অক্ষরটি প্রিন্ট হবে
            cout << '.' << c;
        }
    }
    cout << endl;

    return 0;
}
