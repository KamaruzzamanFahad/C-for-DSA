#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rull;
    int mark;
};

int main(){
    int n; 
    cin >> n;

    Student a[n];

    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].rull >> a[i].mark;
    }

    for(int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].rull << " " << a[i].mark << endl;
    }

}