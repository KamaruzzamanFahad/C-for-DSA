#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rull;
    int mark;
};
bool cmp(Student l, Student r){
    return l.mark < r.mark ? true : false;
}

int main(){
    int n; 
    cin >> n;

    Student a[n];

    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].rull >> a[i].mark;
    }

    sort(a, a+n,cmp);

    for(int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].rull << " " << a[i].mark << endl;
    }

}