#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    };
    int maxi = a[0][0];
    int r = 0,c = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(maxi < a[i][j]){
                maxi = a[i][j];
                r = i;
                c = j;
            }
        }
    };

    cout<<"Max: "<<maxi<<endl;
    cout<<"Location: "<<"["<<r<<"]"<<"["<<c<<"]";
    return 0;
}


