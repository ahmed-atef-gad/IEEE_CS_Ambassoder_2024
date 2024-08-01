#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s,h,m,x,s2;
        int ho;
        cin>>s;
        h= s.substr(0,2);
        m= s.substr(3,2);
        ho = stoi(h);
        if(ho<12 && ho>0){
            x="AM";
            s2=s;
        }else if(ho==12){
            x="PM";
            s2=s;
        }else if(ho==0){
            x="AM";
            ho=12;
            h = to_string(ho);
            s2=h+":"+m;
        }
        else{
            if(ho<22){
                x="PM";
                ho-=12;
                h = to_string(ho);
                s2="0"+h+":"+m;
            }else{
                x="PM";
                ho-=12;
                h = to_string(ho);
                s2=h+":"+m;
            }
        }
        cout<<s2<<" "<<x<<endl;
    }
    return 0;
}