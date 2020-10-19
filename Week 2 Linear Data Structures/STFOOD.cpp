#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int s,v,p;
        long int k,tot=0;
        for(int i=0;i<N;i++){
            cin>>s>>v>>p;
            k=(v/(s+1))*p;
            if(tot<k)
                tot=k;
        }
        cout<<tot<<endl;
    }
	return 0;
}
