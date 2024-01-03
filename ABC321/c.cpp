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
    int k;
    cin >> k;
    vector<int> ans;
    ans.push_back(0);
    rep(i,k){
        ans[0]++;
        if(ans[0]==10){
            ans[0]=0;
            ans.push_back(1);
        }
        rep(i,ans.size()-1){
            if(ans[i]>=ans[i+1]){
                if(i==0){
                    ans[i+1]=ans[i]+1;
                    ans[i]=0;
                }else{
                    ans[i]=ans[i-1]+1;
                    ans[i+1]++;
                }
            }
            if(ans[i+1]==10){
                ans.push_back(0);
                rep(j,ans.size()){
                    ans[j]=j;
                }
            }
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout << ans[i];
    }
}