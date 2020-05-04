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

bool f(int n, int m, int x, int y) {
    if(n < 0 || m < 0)
        return false;
    return (n % x == 0 && m % y == 0);
}

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, m, x, y; 
        cin >> n >> m >> x >> y;
        n--; m--;
        bool ans = f(n, m, x, y) | f(n - 1, m - 1, x, y);
        cout << (ans ? "Chefirnemo" : "Pofik") << endl;
    }
	return 0;
}
