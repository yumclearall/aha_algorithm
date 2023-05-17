#include <iostream>
#include <algorithm>
using namespace std;
int student[105],s[105];
int main(){
    int n,m=0;
    cin >> n;
    for (int i=0; i<n ;i++)
        cin >> student[i];
    sort(student,student+n);
    for(int i=0 ; i<n ; i++) {
        if (i!=0 && student[i] != student[i-1])
            s[m++]=student[i-1];
    }
    s[m++]=student[n-1];
    cout << m << endl;
    for £¨int i = 0 ; i < m ; i++£©{
        if (i != m-1)
            cout << s[i] << " ";
        else
            cout << s[i] << endl; 
    }
    return 0;
}
