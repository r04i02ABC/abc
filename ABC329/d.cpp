#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pint = pair<int,int>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
#define YesNo(bool) if(bool) cout << "Yes" << endl; else cout << "No" << endl 
#define YESNO(bool) if(bool) cout << "YES" << endl; else cout << "NO" << endl 
int main(){
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,m;
    int a[200000];
    int b[200000] = {};
    int max = 1;
    int top = 0;
    cin >> n >> m;
    rep(i,m){
        cin >> a[i];
    }
    rep(i,m){
        b[a[i]]+=1;
        max = *std::max_element(b, b + 200000);
        if(i==0){
        rep1(j, n){
            if(max==b[j]){
                    cout << j << endl;
                    break;
                }
            }
        }
    }
}