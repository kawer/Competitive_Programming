//
//  main.cpp
//  SoftwareForSearching
//
//  Created by Lazaro Kawer on 10/19/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    int n,t;
    string name;
    string surname;
    
    cin >> n;
    
    string arrNames[1000];
    string arrShini[1000];
    

    for(int i=0; i<n; i++){
        cin >> name >> surname;
        arrNames[i] = surname;
    }
    cin >> t;
    for(int j=0; j<t; j++){
        cin >> name >> surname;
        arrShini[j] = surname;
    }
    
    for(int k=0; k<t; k++){
        int familiars = 0;
        for(int x=0; x<n; x++) {
            if(arrShini[k] == arrNames[x]){
                familiars++;
            }
        }
        cout << familiars << endl;
    }
    
    
    return 0;
}
