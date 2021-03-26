#include <bits/stdc++.h>
using namespace std;

char a[100], b[100];
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        cin >> a >> b;
        int n1 = strlen(a), n2 = strlen(b), k1 = 0, k2 = 0;

        int ans = 0;
        for (int i = 0; i < n1; i++){
            for (int j = 0; j < n2; j++){

                int k1 = i, k2 = j, cnt = 0;
                while(k1 < n1 && k2 < n2 && a[k1] == b[k2]){
                    k1++, k2++, cnt++;
                }

                ans = max(ans, cnt);
            }
        }
        cout << n1+n2-2*ans<< endl;

    }
    return 0;
}