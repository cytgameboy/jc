//
//  main.cpp
//  jc
//
//  Created by apple on 13-9-22.
//  Copyright (c) 2013年 apple. All rights reserved.
//

#include <iostream>
using namespace std;
int jcn(int n)
{
    if(n==1) return 1;
    else return n*jcn(n-1);
}
int main()
{
    int m,n,p,q,cmn;
    q=1;
    cin>>m>>n;
    p=m-n;
    for (; m>p; m--) {
        q=q*m;
    }
    cmn=q/jcn(n);
    cout<<cmn;
}

