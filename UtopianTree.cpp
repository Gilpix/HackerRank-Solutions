#include <iostream>
using namespace std;

int height(int n) {
    int m=1;
    if(n%2==0)
        {
        for(int i=0;i<(n/2);i++)
            {
            m=2*m +1;
            }
        }
    else
        {
         for(int i=0;i<(n/2);i++)
            {
            m=2*m +1;
            }
          m=2*m;
        }
    return m;
}
int main() {
    int T;
    cin >> T;//no. of test case
    while (T>0) { 
        int n;
        cin >> n; //no of cycle
        cout << height(n) << endl;
        T--;
    }
}
