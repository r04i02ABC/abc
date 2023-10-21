#include <cstdio>
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;
int main(void){
    int h,w;
    cin >> h >> w;
    char s[1000][1000];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> s[i][j];
        }
    }
    int check = 0;

    for(int i=1;i<h-1;i++){
        for(int j=1;j<w-1;j++){
            if(s[i][j]=='#'){
                s[i][j]='1';
                while(check==8){
                    if(s[i-1][j-1]=='#')s[i-1][j-1]='1';
                    else{
                        check++;
                    }
                    if(s[i][j-1]=='#')s[i][j-1]='1';
                    else{
                    check++;
                    }
                    if(s[i+1][j-1]=='#')s[i+1][j-1]='1';
                    else{
                        check++;
                    }
                    if(s[i-1][j]=='#')s[i-1][j]='1';
                    else{
                        check++;
                    }
                    if(s[i][j]=='#')s[i][j]='1';
                    else{
                        check++;
                    }
                    if(s[i+1][j]=='#')s[i-1][j]='1';
                    else{
                    check++;
                    }
                    if(s[i-1][j+1]=='#')s[i-1][j+1]='1';
                    else{
                    check++;
                    }
                    if(s[i][j-1]=='#')s[i][j+1]='1';
                    else{
                        check++;
                    }
                    if(s[i+1][j+1]=='#')s[i+1][j+1]='1';
                    else{
                        check++;
                    }
                }
            }
        }
    }
}