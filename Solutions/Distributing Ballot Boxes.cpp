#include<bits/stdc++.h>
#define forc(a,n) for(int i=a;i<n;i++)
#define forc2(a,n,i) for(int i=a;i<n;i++)
#define inarr(arr,n) for(int i=0;i<n;i++) cin>>arr[i];

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int n,b,totalsum=0;

int main() {
//    freopen("in.txt","r",stdin);
//  for(int z=0;z<4;z++) {

    while(cin>>n>>b && n != -1 && b != -1 ) {
        vector<int> arr(n);
        int maxE = 0;
        forc(0,n) {
            cin>>arr[i];
            maxE = max(maxE,arr[i]);
        }
        int low = 1, high = maxE;
        while(low<high) {
            int mid = (low+high)/2;
            int dist = 0;
            forc(0,n) {
                dist += (arr[i]+mid-1)/mid;
            }
            if(dist > b) low = mid + 1;
            else high = mid;
        }
        cout<<low<<endl;
    }
//  cout<<endl; }
    return 0;
}
