#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pint = pair<int,int>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i,n) for (int i = 1; i <= (int)(n); i++)
#define YesNo(bool) if(bool) cout << "Yes" << endl; else cout << "No" << endl 
#define YESNO(bool) if(bool) cout << "YES" << endl; else cout << "NO" << endl 
int main(){
    int n,s,m,l;
    cin >> n >> s >> m >> l;
    bool check = true;
    bool check2 = true;
    int ans=0;
    int tmp;
    n++;
    if(l/12>m/8){
        check=false;
    }
    if(m/8>s/6){
        check2=false;
    }
    if(l/12>s/6){
        check=false;
    }
    
    if(check&&n>=24){
        ans+=(n/12-2)*l;
        if(l*2<m*3&&l*2<s*4){
            ans=(n/12)*l;
        }else if(m*3<s*4){
            ans+=s*4;
        }else{
            ans+=m*3;
        }    
    }else if(check2&&n>=24){
        if(m*3<s*4){
            ans=(n/8-3)*m+s*4;
        }else{
            ans+=(n/8)*m;
        }
    }else{
        
    }
    cout << ans;
}