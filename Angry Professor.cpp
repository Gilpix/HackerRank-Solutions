#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    int T;
    cin>>T;
    
    while(T--)
        {
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        
        int a=0,p=0;
        
        for(int i=0; i<n; i++)
        {
            if(ar[i]<=0)
                p++;
            else
                a++;
        }
    
    if(p>=k)
        cout<<"NO"<<endl;
    else    
        cout<<"YES"<<endl;
    }
     return 0;    
    }
