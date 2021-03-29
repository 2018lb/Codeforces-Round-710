#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+10;

char s[N];
int count_num[30];
bool char_if[30];

bool check(int kk, char op){
    int co[30];
    memset(co,0,sizeof(co));
    while (s[kk] != op){
        ++co[s[kk]-'a'];
        if (co[s[kk]-'a']==count_num[s[kk]-'a']) return false;
        kk++;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--){
        int tot_char = 0;
        memset(count_num,0,sizeof(count_num));
        memset(char_if,0,sizeof(char_if));

        cin >> s;
        int n = strlen(s);
        for (int i = 0; i < n; i++){
            if (count_num[s[i]-'a'] == 0) tot_char++;
            count_num[s[i]-'a']++;
        }

        char ans[30];
        int cnt = 0, ans_len = 0;
        memset(ans,0, sizeof(ans));
        while(ans_len < tot_char){
            for (int i = 'z'; i >= 'a'; i--){
                if (char_if[i-'a'] || count_num[i-'a'] == 0) continue;
                if (check(cnt, i)){
                    while(s[cnt] != i){
                         count_num[s[cnt]-'a']--;
                         cnt++;
                    }
                    cnt++;
                    ans[ans_len++] = i;
                    char_if[i-'a'] = true;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}