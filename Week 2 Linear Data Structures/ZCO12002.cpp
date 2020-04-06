#include <bits/stdc++.h>
using namespace std;

long lowerBound(vector<long>& A, long target) {
    long ans = INT_MIN, low = 0, high = A.size() - 1;
    while(low <= high) {
        long mid = low + (high - low) / 2;
        if(A[mid] <= target) {
            ans = A[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

long upperBound(vector<long>& A, long target) {
    long ans = INT_MAX, low = 0, high = A.size() - 1;
    while(low <= high) {
        long mid = low + (high - low) / 2;
        if(A[mid] >= target) {
            ans = A[mid];
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    // int t;
    // cin >> t;
    // while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<long> v(x), w(y);
        long ret = INT_MAX;
        vector<vector<long>> a(n, vector<long>(2));
        for(int i = 0; i < n; i++) {
            cin >> a[i][0] >> a[i][1];
        }
        for(int i = 0; i < x; i++) {
            cin >> v[i];
        }
        for(int i = 0; i < y; i++) {
            cin >> w[i];
        }
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        for(int i = 0; i < n; i++) {
            long lb = lowerBound(v, a[i][0]);
            long ub = upperBound(w, a[i][1]);
            ret = min(ret, ub - lb + 1);
        }
        cout << ret << endl;
    // }
}
