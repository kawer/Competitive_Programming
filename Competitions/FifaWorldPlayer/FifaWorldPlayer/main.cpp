//
//  main.cpp
//  FifaWorldPlayer
//
//  Created by Lazaro Kawer on 10/19/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

    int n;
    int pa,pj,g,a,ta,tr;
    string name;
    string winName = "";
    double result = 0.0;
    double temp = 0.0;
    cin >>n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin >> name >> pa >> pj >> g >> a >> ta >> tr;
        result = ((log10(pa)) + (pj) + (2*g) + (a) - (ta+2*tr));
        if(result > temp) {
            temp = result;
            winName = name;
        }
        
    }
    cout << winName << endl;
    
    return 0;
}
