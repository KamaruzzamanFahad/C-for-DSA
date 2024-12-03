#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;
    for(int i=0; i<n; i++){
        string S, X;
    cin >> S >> X ;
    while(S.find(X) != string::npos){
        S.replace(S.find(X), X.length(), "#");
    }
    cout << S << endl;
    }
}