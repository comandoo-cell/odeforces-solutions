#include <iostream>

using namespace std;

int main() {


    int t;
    cin >> t;

    while (t--) {
        int n,ans=0;
        cin >> n;
        string s1;
        cin >> s1;
        for (int i = 0; i < s1.length(); i++) {
            ans = max(ans, s1[i]-'a'+1);
        }
        cout << ans  << endl;
        
        

    }
}
