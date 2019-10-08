#include<bits/stdc++.h>
#define forc(a,n) for(int i=a;i<n;i++)
#define forc2(a,n,i) for(int i=a;i<n;i++)
#define inarr(arr,n) for(int i=0;i<n;i++) cin>>arr[i];

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main() {
//  freopen("in.txt","r",stdin);
//  for(int z=0;z<4;z++) {
    int q=0;
    char arr[8][8];
    int posq[65][65];
    for(int i=0;i<8;i++) for(int j=0;j<8;j++) {
        cin>>arr[i][j];
        if(arr[i][j]=='*') q++;
    }
    for(int i=7;i>=0;i--) {
        for(int j=7;j>=0;j--) {
            if(arr[i][j]=='*') {
                bool flag = false;
                int col = j,row = i;
                for(int k=row-1;k>=0;k--) {
                    if(arr[k][col]=='*') {
                        flag = true;
                        break;
                    }
                }
                for(int k=col+1,l=row-1;k<8&&l>=0;k++,l--) {
                    if(arr[l][k]=='*') {
                        flag = true;
                        break;
                    }
                }
                for(int k=row-1,l=col-1;k>=0&&l>=0;k--,l--) {
                    if(arr[k][l]=='*') {
                        flag = true;
                        break;
                    }
                }
                for(int k=col-1;k>=0;k--) {
                    if(arr[row][k]=='*') {
                        flag = true;
                        break;
                    }
                }
                if(flag) {
                    cout<<"invalid";
                    return 0;
                }
            }
        }
    }
    if(q!=8) cout<<"invalid";
    else
    cout<<"valid";

//  cout<<endl; }
    return 0;
}

