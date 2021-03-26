#include <bits/stdc++.h>
using namespace std;

map<int, int> k;
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        k.clear();
        int n, max_num = 0;
        cin >> n;
        for (int i = 1; i <= n; i++){
            int x;
            cin >> x;
            k[x]++;
            max_num = max(max_num, k[x]);
        }

        if (max_num*2 <= n){
            if (n%2) cout << 1 << endl;
            else cout << 0 << endl;
        }else{
            cout << max_num*2 - n << endl;
        }
    }
    return 0;
}