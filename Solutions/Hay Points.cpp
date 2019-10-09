#include<bits/stdc++.h>
#define inarr(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define forc(a,n) for(int i=a;i<n;i++)

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
//  freopen("in.txt","r",stdin);
    int m,n;
    cin>>m>>n;
    map<string,ll> dict;
    forc(0,m) {
        string s;
        ll num;
        cin>>s>>num;
        dict[s] = num;
    }
    forc(0,n) {
        int sum = 0;
        string jobdes;
        cin>>jobdes;
        while(jobdes != ".") {
            if(dict[jobdes]) sum += dict[jobdes];
            cin>>jobdes;
        }
        cout<<sum<<endl;
    }
}
