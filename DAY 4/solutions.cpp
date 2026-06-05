#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        cin >> s1;
        int m = 0, n = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] == '0') {
                m++;
            }
            else {
                n++;
            }
        }
        int Min = min(m, n);
        if (Min % 2 == 1) {
            cout << "DA\n";
        }
        else {
            cout << "NET\n";
        }
    }

    return 0;
}
