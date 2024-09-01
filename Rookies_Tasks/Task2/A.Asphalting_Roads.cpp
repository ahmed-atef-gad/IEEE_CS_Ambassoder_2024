#include <iostream>
 
using namespace std;
 
int main()
{
    int n , horz , vert;
    cin >> n;
    bool hor[100] = {false} , ver[100] = {false};
    for(int i = 1; i <= n * n; ++i)
    {
        cin >> horz >> vert;
        if(!hor[horz] && !ver[vert])
        {
            hor[horz]=ver[vert]=true;
            cout <<i<<' ';
        }
    }
    return 0;
}
