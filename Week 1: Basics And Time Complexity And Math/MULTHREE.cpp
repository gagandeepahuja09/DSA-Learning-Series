#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long k, d0, d1, sum = 0;
        cin >> k >> d0 >> d1;
        k -= 3;
        long d2 = (d0 + d1) % 10;
        vector<long> v(4);
        v[0] = (2 * d2) % 10;
        v[1] = (4 * d2) % 10;
        v[2] = (8 * d2) % 10;
        v[3] = (6 * d2) % 10;
        long q = k / 4, rem = k % 4;
        for(int i = 0; i < 4; i++) {
            sum = (sum + v[i]);
        }
        sum = (sum * q);
        sum += (d0 + d1 + d2) % 3;
        for(int i = 0; i < rem; i++) {
            sum = (sum + v[i]);
        }
        cout << (sum % 3 == 0 ? "YES" : "NO") << endl;
    }
	return 0;
}
