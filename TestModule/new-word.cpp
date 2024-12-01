#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int arra[26] = {0};
    string str = "egypt";

    for(char c:s){
        int asli = tolower(c) -97;
        arra[asli] +=1;
        
    }

    int mini = INT_MAX;

    for(char c : str){
            mini = min(mini, arra[c-'a']);
    }

    cout << mini;

}