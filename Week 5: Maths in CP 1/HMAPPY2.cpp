#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vii vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'

int lcm(int a, int b) {
    return a * b / __gcd(a, b);
}

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, a, b, k;
        cin >> n >> a >> b >> k;
        int ans = (n / a) + (n / b) - (2 * (n / (lcm(a, b))));
        cout << (ans >= k ? "Win" : "Lose") << endl;
    }
	return 0;
}
