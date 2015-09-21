#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sort(int n,int sticks[],int sum)
    {
    int small =sum ; 
       
    for(int j=0;j<n;j++)
        {
        if(sticks[j]<=small && sticks[j]>0)
            small=sticks[j];
      
       }
    return small;
}


int check(int n,int sticks[])
    {
    int a =0;
    for(int j=0;j<n;j++)
        {
        a=sticks[j]+a;
    }
    return a;
    
    
}




void display(int n, int sticks[])
    {
    for(int j=0;j<n;j++)
        {
      cout<<sticks[j]<<" ";
    } 
    cout<<endl;
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    int sticks[n];
    for(int j=0;j<n;j++)
        {
       cin>>sticks[j];
    }    

    int small=0;
    int b=0;
    int largest =check(n,sticks);
    int ar[n];
    int m=0;
    while(check(n,sticks)>0)
        { 
         small=sort(n,sticks,largest);
        if (small ==-1)
            break;
  
        
    for(int j=0;j<n;j++)
        {
        if(sticks[j]>=small){
            b++;
       sticks[j]=sticks[j]-small;
        }
    }
        
         ar[m]=b;
         m++;
        b=0;
}
    
    
    for(int j=0;j<m;j++)
        { 
       cout<<ar[j]<<endl;
    }    
   
    return 0;
}
