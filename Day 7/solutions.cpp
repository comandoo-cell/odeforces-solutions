#include <iostream>
using namespace std;

int main() {


    int t;
    cin >> t;

    while (t--) {
        string s1, s2 = "";
        cin >> s1;

        for (int i = s1.length() - 1; i >= 0; i--) {
            if (s1[i] == 'q') {
                s2.push_back('p');

            }
            else  if (s1[i] == 'p') {
                s2.push_back('q');
            }
            else {
                s2.push_back(s1[i]);
            }

        }

        cout << s2 << endl;
    }
}
