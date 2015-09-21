#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1,m1,y1;
    int d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    int f=0;
    
    if(y1!=y2 && y1>y2)
        f=10000;
    else if(m1!=m2 && m1>m2 && y1>=y2)
        f=(m1-m2)*500;
        else if(d1!=d2 && d1>d2 && m1>=m2 && y1>=y2)
           f=(d1-d2)*15;
    else f=0;
    
        cout<<f;
    return 0;
}

