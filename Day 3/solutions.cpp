
int solve(string s) {
    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else cnt1++;
    }
    return abs(cnt0 - cnt1);
}
