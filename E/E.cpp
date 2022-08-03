#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int total = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(i%2!=0 && j%2!=0){
                total += a[i][j];
            }
            if(i%2 == 0 && j%2!=0){
                total += a[i][j];
            }
            if(i%2!=0 && j%2 == 0){
                total += a[i][j];
            }

        }
    };

    cout<<total<<endl;
    return 0;
}
