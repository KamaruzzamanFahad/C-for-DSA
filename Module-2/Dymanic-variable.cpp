#include<bits/stdc++.h>
using namespace std;
int main(){
    int x =5;

    cout << x << endl;

    int *p = new int;
    *p = 500;

    cout << *p << endl;

    x =56;

    cout << x <<endl;

    *p = 66;

    cout << *p;

}