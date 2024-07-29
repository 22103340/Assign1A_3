#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char str[n];
    for(int i = 0;i < n;i++){
        cin >> str[i];
    }
    reverse(str,str+n);
    for(int i = 0;i < n;i++){
        cout << str[i];
    }

}
