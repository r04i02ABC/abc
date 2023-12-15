#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pint = pair<int,int>;
using pll = pair<long long, long long>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
#define YesNo(bool) if(bool) cout << "Yes" << endl; else cout << "No" << endl 
#define YESNO(bool) if(bool) cout << "YES" << endl; else cout << "NO" << endl 
bool compare(pint& p1, pint& p2){return p1.second < p2.second;}
bool compare(pll& p1, pll& p2){return p1.second < p2.second;}//secondの値でfirstをsort
int main(){
    int n,m;
    string s;
    cin >> n >> m >> s;
    int ans;
    int count=0;
    bool check1=false;
    rep(i,m){
        if(s[i]=='I'&&check1==true){

        }else if(s[i]=='I'&&check1==false){
            check1 = true;
            count++;
        }else if(s[i]=='O'&&check1==false){
            
        }

    }

    cout << ans;
}