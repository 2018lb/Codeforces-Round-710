#include <bits/stdc++.h>
using namespace std;

char s[100];
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        cin >> s;
        int  last = -1, ans = 1, last_x = -1;
        for (int i = 0; i < n; i++){
            if (last != -1)
            if (i - last_x > k){
                if (last_x == last) break;
                last_x = last;
                ans++;
            }

            if (s[i] == '*') {
                last = i;
                if (last_x == -1) last_x = i;
            }

        }
        if (last_x != last) ans++;
        if (last == -1) ans = 0;
        cout << ans << endl;
    }
    return 0;
}
