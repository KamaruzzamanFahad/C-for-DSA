#include <bits/stdc++.h>
using namespace std;

int main(){
    int num ;
    long long longnum;
    char c;
    float floatnum;
    double doublenum;

    cin >> num >> longnum >> c >> floatnum >> doublenum;

    cout << num << endl << longnum << endl << c << endl << fixed << setprecision(3) << floatnum << endl << fixed << setprecision(9) << doublenum;
}