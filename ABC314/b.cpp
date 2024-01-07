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
//bool compare(pll& p1, pll& p2){return p1.second < p2.second;}//secondの値でfirstをsort
//bool compare(all_of(check.begin(), check.end(), [](bool x){return x;}))//全ての要素がtrueならtrueを返す
int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    vector<vector<int>> a(n,vector<int>(40));
    vector<pint> count(40);
    int x;
    rep(i,n){
        cin >> c[i];
        rep(j,c[i]){
            cin >> a[i][j];
            count[i].second++;
        }
    }
    cin >> x;
    rep(i,n){
        rep(j,count[i].second){
            if(a[i][j]==x){
                count[i].first = i+1;
            }
        }
    }

    int ans = count[0].second; 
    int cnt = 0;

    rep(i,n){
        min(ans,count[i].first);
    }
    rep(i,n){
        if(count[i].second==ans){
            cnt++;
        }
    }
    cout << cnt << endl; 
    if(cnt!=0){
        rep(i,n){
            if(count[i].second==ans){
                cout << count[i].first << " ";
            }
        }
    } 
}