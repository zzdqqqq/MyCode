#include <iostream>
using namespace std;
extern int a, res;

int main ()
{
    
    int a, res;
    cin >> a;
    if (a != 1) {
        if (a%2==1) {
            res = 3*a+1;
            cout << res << endl ;
        }
        else
            res = a/2;
        cout << res << endl ;
    }
    
    
}
