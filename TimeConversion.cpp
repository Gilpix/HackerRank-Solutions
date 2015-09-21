#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    int h,m,s;
    char c[2];
    scanf("%d:%d:%d%s",&h,&m,&s,c);
    if(!strcmp(c,"PM") && h != 12)h+=12;
    if(!strcmp(c,"AM") && h == 12)h = 0;
    printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}