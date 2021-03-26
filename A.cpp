#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        long long n, m, x;
        cin >> n >> m >> x;
        long long r = (x-1) / n + 1, l = (x- 1) % n;
        cout << l*m+r << endl;
    }
 
    return 0;
}