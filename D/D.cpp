#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    };
    int total = 0;
    for(int i=0;i<n;i++){
        total += a[0][i] + a[n-1][i] + a[i][i] + a[n-1-i][i];
    }
    int mid = (n/2);
    int gurbage = a[0][0]+ a[0][n-1]+a[n-1][0]+a[n-1][n-1]+a[mid][mid];
    total -= gurbage;
    cout<<total<<endl;


    return 0;
}


