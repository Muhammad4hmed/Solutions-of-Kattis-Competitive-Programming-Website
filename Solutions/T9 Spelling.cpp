#include<bits/stdc++.h>
#define forc(a,n) for(int i=a;i<n;i++)
#define forc2(a,n,i) for(int i=a;i<n;i++)
#define inarr(arr,n) for(int i=0;i<n;i++) cin>>arr[i];

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

void printNTimes(int c,int n) {
    for(int i=0;i<n;i++) cout<<c;
}

bool in(char c,string s) {
    for(int i=0;i<s.size();i++) {
        if(s[i]==c) return true;
    }
    return false;
}

int main() {
//  freopen("in.txt","r",stdin);
//  for(int z=0;z<4;z++) {

    int q,i=-1;
    cin>>q;
    q++;
    string arr[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    while(q--) {
        i++;
        string s;
        getline(cin,s);
        if(i>0)
        cout<<"Case #"<<i<<": ";
        int n = s.size();
        for(int i=0;i<n;i++) {
            if(i>0 && s[i]==s[i-1]) cout<<" ";
            if(s[i]==32) cout<<0;
            for(int j=0;j<8;j++) {
                if(in(s[i],arr[j])) {
                    for(int k=0;k<arr[j].size();k++) {
                        if(arr[j][k]==s[i]) {
                            printNTimes(j+2,k+1);
                            if(i+1<n && (s[i+1]==arr[j][0] || s[i+1]==arr[j][1] || s[i+1]==arr[j][2] || s[i+1]==arr[j][3])) cout<<" ";
                            break;
                        }
                    }
                }
            }
        }
        if(i>0)
        cout<<endl;
    }

//  cout<<endl; }
    return 0;
}
