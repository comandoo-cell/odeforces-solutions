
#include<iostream>
using namespace std;
int main() {

    int n,Min=1e9,A;
    cin >> n;
    while (n--) {
        cin >> A;
        if (A == 0) {
            cout << 0;
            break;
        }
        A = abs(A);
        if (Min > A) {
            Min = A;
        }
    }

    cout << Min;


    return 0;
}
