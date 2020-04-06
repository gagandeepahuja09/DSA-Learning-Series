#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long n, a, b, x, y, z;
        cin >> n >> a >> b >> x >> y >> z;
        priority_queue<long> pq;
        for(int i = 0; i < n; i++) {
            long u; cin >> u;
            pq.push(u);
        }
        long mul = (z - b) / y;
        if(((z - b) % y) == 0)
            mul--;
        a = a + (x * mul);
        long cnt = 0;
        while(a < z && !pq.empty()) {
            auto t = pq.top();
            a += t;
            pq.pop();
            if(t / 2)
                pq.push(t / 2);
            cnt++;
        }
        if(a >= z)
            cout << cnt << endl;
        else
            cout << "RIP" << endl;
    }
}
