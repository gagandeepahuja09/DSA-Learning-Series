#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int j = 0, ans = 0;
        for(int i = 0; i < n; i++) {
            mp[a[i]]++;
            if(j < n && mp.size() >= k) {
                if(--mp[a[j]] == 0) {
                    mp.erase(a[j]);
                }
                j++;
            }
            ans = max(ans, i - j + 1);
        }
        cout << ans << endl;
    }
}
