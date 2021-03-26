#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

struct sd{
    int r, c;
}a[N];

bool com (sd a, sd b){
    return a.r < b.r;
}


int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i].r;
        for (int i = 1; i <= n; i++) cin >> a[i].c;

        sort(a+1,a+1+n, com);

        a[0].r = a[0].c = 1;
        int ans = 0;
        for (int i = 1; i <= n; i++){
            int k1 = a[i-1].r - a[i-1].c, k2 = a[i].r - a[i].c;
            if (k1 == k2){
                if (k1%2) continue;
                else{
                    ans += a[i].r-a[i-1].r;
                    continue;
                }
            }else{
                if (k1%2) k1--;
                ans += (k2-k1)/2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}