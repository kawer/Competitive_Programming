//
//  main.cpp
//  WeddingCakeVolume
//
//  Created by Lazaro Kawer on 10/26/16.
//  Copyright © 2016 Kawer. All rights reserved.
//
#include <iostream>
# define PI          3.14159265358979323846
using namespace std;
typedef long long ll;
int main(){
    
    int T,radius,height,mCakes;
    
    scanf("%d",&T);
    for(int t = 0; t < T; t++){
        scanf("%d",&mCakes);
        double ans=0;
        for(int i=0;i < mCakes; i++){
            scanf("%d %d",&radius,&height);
            ans+=(PI*(radius*radius))*height;
        }
        printf("%.02f\n",ans);
        
    }
    return 0;
}
