#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;
int a[N], max_ans[N], min_ans[N];

bool max_num[N], min_num[N];
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int n;
        memset(max_num, 0,sizeof (max_num));
        memset(min_num, 0,sizeof (min_num));

        cin >> n;
        int min_ = 1, max_ = -1;

        for (int i = 1; i <= n; i++){
            cin >> a[i];
            if (a[i] != a[i-1]){
                max_ = a[i];
                max_ans[i] = min_ans[i] = a[i];
                max_num[a[i]] = min_num[a[i]] = 1;
                continue;
            }
            while (min_num[min_]) min_++;
            while (max_num[max_]) max_--;
            max_ans[i] = max_;
            min_ans[i] = min_;
            min_num[min_] = max_num[max_] = 1;
        }

        for (int i = 1; i <= n; i++) cout << min_ans[i] << " ";
        cout << endl;

        for (int i = 1; i <= n; i++) cout << max_ans[i] << " ";
        cout << endl;
    }
    return 0;
}