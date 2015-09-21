#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

long long int direct(long long int p, long long int q)
    {
    return p*q;
}

long long int cross(long long int p, long long int q, long long int c)
    {
    return p*q+p*c;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    
    while(t--)
        {
    long long int a,b;
    long long int x,y,z;
     long long int temp1,temp2,temp3;
        cin>>a>>b>>x>>y>>z;
        temp1=direct(a,x)+direct(b,y);
        temp2=cross(a,y,z)+direct(b,y);
        temp3=cross(b,x,z)+direct(a,x);
       
        
        if(temp1<=temp2 && temp1<=temp3)
            cout<<temp1<<endl;
        
        else if(temp2<=temp1 && temp2<=temp3)
            cout<<temp2<<endl;
        
        else if(temp3<=temp1 && temp3<=temp2)
            cout<<temp3<<endl;
            
        
        
      
    }  
    return 0;
}

