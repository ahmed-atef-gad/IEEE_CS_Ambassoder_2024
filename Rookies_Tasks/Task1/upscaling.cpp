#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        for(int j=0; j<2*n; j++){
            for(int k=0; k<2*n; k++){
                if((k%4 <2 && j%4 <2) || k==j || (k+j)%4==1 ||(k-j)%4==0){
                    cout<<'#';
                }else{
                    cout<<'.';
                }
 
            }
            cout<<endl;
        }
    }
    return 0;
}