//
//  main.cpp
//  FBI
//
//  Created by Lazaro Kawer on 10/17/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    int t;
    cin >> t;
    
    if(t==0 || t==4 || t==5 || t==9){
        cout << 4;
    }
    if(t==1 || t==2 || t==6 || t==10){
        cout << 3;
    }
    if(t==3 || t==7 || t==8){
        cout << 5;
    }if(t==11 || t==12){
        cout << 6;
    }
    
    
    return 0;
}
//zero four five nine
//one two six ten
//three seven eight
//eleven twelve
