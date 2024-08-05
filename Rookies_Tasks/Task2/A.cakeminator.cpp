#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r=0,c=0;
    int rs=0,cs=0;
    cin>>r>>c;
    char arr[r][c];
    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j]=='S'){
                rs++;
                break;
            }
        }
    }
    long long complete_row=(r*c)-(c*rs);

    for (int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            if(arr[j][i]=='S'){
                cs++;
                break;
            }
        }
    }
    long long complete_col=(r*c)-(r*cs);
    long long intersection=(r-rs)*(c-cs);
    long long ans = complete_row+complete_col-intersection;
    cout<<ans<<endl;
    return 0;
}