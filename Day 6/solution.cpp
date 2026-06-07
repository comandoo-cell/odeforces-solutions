#include <iostream>
using namespace std;

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 1; i <= (n * 2); i++) {
            int x;
            cin >> x;
            if (x & 1) 
                odd++;
            else
                even++;
        }
        if (odd == even)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
