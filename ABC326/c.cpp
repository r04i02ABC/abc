#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath> 
using namespace std;
int main(void){
    int n;
    int m;
    int tmp[300000];
    vector<int> a;
    vector<int> ans;
    cin >> n >> m;
    bool check1 = true;
    bool check2 = true;
    int j=0;
    int k=0;
    int h=0;
    for(int i=0;i<n;i++){
        cin >> tmp[i];
        a.push_back(tmp[i]);
    }
    sort(a.begin(), a.end());
    while(check1){
        k=j+1;
        h=1;
        while(check2){
            if(j+k>=n){
                check1 = false;
                check2 = false;
                if(a[k]-a[j]>=m){
                    ans.push_back(h);
                    k=0;
                    check2=false;
                }
            }
            if(a[k]-a[j]>=m){
                ans.push_back(h);
                k=0;
                check2=false;
            }
            k++;
            h++;
        } 
        j++;
        check2=true;
    }
    int max = *max_element(ans.begin(), ans.end());
    cout << max;
}