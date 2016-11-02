//
//  main.cpp
//  SuperEncryption
//
//  Created by Lazaro Kawer on 10/14/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    string w;
    cin >> w;
    string first = "";
    string second = "";
    string middle = "";
    
    if(w.length() % 2 == 0) {
        for(int i= ((w.length()/2 -1)); i >= 0; i--) {
            first += w[i];
        }
        
        for(int j = (w.length()-1); j > ((w.length()/2)-1); j--) {
            second += w[j];
        }
    }
    else{
        for(int i = ((w.length()/2 -1)); i >= 0; i--) {
            first += w[i];
        }
        first += w[w.length()/2];
        
        for(int j = w.length()- 1; j > (w.length()/2 ); j--) {
            second += w[j];        }
    }
    cout << first << second << endl;
    
    return 0;
}
// alejandro
// jelaaordn
