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

vector<int> semiPrimes(vector<int>& p) {
    vector<int> sp;
    for(int i = 0; i < p.size(); i++) {
        for(int j = i + 1; j  < p.size(); j++) {
            sp.push_back(p[i] * p[j]);
        }
    }
    return sp;
}

set<int> sumUp(vector<int>& p) {
    set<int> st;
    for(int i = 0; i < p.size(); i++) {
        for(int j = 0; j  < p.size(); j++) {
            st.insert(p[i] + p[j]);
        }
    }
    return st;
}


signed main() {
    int t = 1;
    cin >> t;
    vector<int> p = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31,
        37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    vector<int> sp = semiPrimes(p);
    set<int> sums = sumUp(sp);
    while(t--) {
        int n;
        cin >> n;
        if(sums.count(n)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
	return 0;
}
