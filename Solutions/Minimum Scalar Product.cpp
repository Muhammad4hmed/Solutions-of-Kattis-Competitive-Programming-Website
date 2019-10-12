#include<bits/stdc++.h>
#define forc(a,n) for(int i=a;i<n;i++)
#define forc2(a,n,i) for(int i=a;i<n;i++)
#define inarr(arr,n) for(int i=0;i<n;i++) cin>>arr[i];

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

ll n,q,pos1,pos2,counter=1;

int main() {
//    freopen("in.txt","r",stdin);
//  for(int z=0;z<4;z++) {

    cin>>q;
    while(q--) {
        pos1 = pos2 = 0;
        cin>>n;
        vector<int> v1(n),v2(n),temp1,temp2;
        inarr(v1,n);
        inarr(v2,n);
        temp1 = v1;
        temp2 = v2;
        sort(v1.begin(),v1.end());
        sort(v2.rbegin(),v2.rend());
        forc(0,n) {
            pos1 += ((ll)v1[i]*(ll)v2[i]);
        }
        cout<<"Case #"<<counter<<": "<<pos1<<endl;
        counter++;
    }
//  cout<<endl; }
    return 0;
}
