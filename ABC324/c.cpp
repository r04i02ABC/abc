#include <cstdio>
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;
int main(void){
    int n;
    string t;
    string s[50000];
    cin >> n;
    cin >> t;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }

    for(int i=0;i<n;i++){
        if(t==s[i]){
            cout << i+1;
            cout << 1 << endl;
        }else if(s[i].compare(t)>0&&s[i].compare(t)==1){
            cout << i+1;
            cout << 2 << endl;
        }else if(s[i].compare(t)<0&&s[i].compare(t)==-1){
            cout << i+1;
            cout << endl;
        }
    }
}
