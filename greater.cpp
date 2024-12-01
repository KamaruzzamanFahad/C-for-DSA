#include <bits/stdc++.h>
using namespace std;

int main(){
    int mx = INT_MIN;
    for(int i=0; i<4; i++){
        int temp;
        cin >> temp;
     mx = max(mx, temp);
    }
    cout << mx;
}