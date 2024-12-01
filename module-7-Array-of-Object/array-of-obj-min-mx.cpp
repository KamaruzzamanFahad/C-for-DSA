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

    Student mn;
    mn.mark = INT_MAX;

    for(int i=0; i<n; i++){
       if(a[i].mark < mn.mark){
        mn = a[i];
       }
    }

    cout << mn.name << " " << mn.rull << " " << mn.mark << endl;

}