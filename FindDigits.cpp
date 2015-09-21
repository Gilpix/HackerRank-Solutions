#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int num;
    int *ptr;
    while(t--)
        {
        cin>>num;
        int an=num,z=0;
       
        int i=0;
        do {
    int digit = num % 10;
    
     num =num/10;             
               if(digit>=1 && an%digit==0)
                z++;
            
} while (num > 0);
       
   cout<<z<<endl;  
        
        
    }
    
    return 0;
}
