#include<bits/stdc++.h>

using namespace std;

const int maxn = 42;
long long p2[maxn], ans;
int n, a[maxn];

void f() {
    p2[0] = 1;
    for(int i = 1; i <= 40; i++) p2[i] = p2[i-1] << 1;
}

int main() {
    f();
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i] * p2[n-1];
    }
    long long w = 0;
    for(int i = 0; i < n; i++) {
        w = a[i];
        if(w < 200) ans -= w;
        for(int j = i+1; j < n; j++) {
            w = a[i] + a[j];
            if(w < 200) ans -= w;
            for(int k = j+1; k < n; k++) {
                w = a[i] + a[j] + a[k];
                if(w < 200) ans -= w;
            }
        }
    }
    cout<<ans;
    return 0;
}
