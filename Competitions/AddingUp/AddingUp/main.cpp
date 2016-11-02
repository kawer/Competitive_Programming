//
//  main.cpp
//  AddingUp
//
//  Created by Lazaro Kawer on 10/9/16.
//  Copyright © 2016 Kawer. All rights reserved.
//
#include <iostream>
#include <stdio.h>
using namespace std;

const int ArX=505;
int a[ArX][ArX];

int main(){
    int n,k,t;
    for(int i=1;i<ArX;i++){
        a[i][i]=a[i][0]=1;
        for(int j=1; j<i; j++)
            a[i][j]=(a[i-1][j-1]+a[i-1][j])%1000000007;
    }
    cout << t;
    while(t--){
        cin >> n >> k;
        cout  << a[n+k-1][n];
    }
    return 0;
}
