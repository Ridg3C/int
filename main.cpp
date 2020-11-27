#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float n=1;
    while(1)
    {
        float a=(2*n-3)/(n+2);
        if (((a==0 || (a==1) && (floor((2*n-3)/(n+2))==a))))
            {
                cout<<a;
            }
        if (a>1)
        {
            break;
        }
        n++;
    }

    return 0;
}
