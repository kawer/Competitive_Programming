//
//  main.cpp
//  NamingTowers
//
//  Created by Lazaro Kawer on 10/10/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    string word, back;
    string flag = "YES";
    cin >> n;
    
    for(int j = 0; j < n; j++) {
    
        cin >> word;
        back = "";
        for (int k = word.length()-1; k >= 0; k--) {
            back += word[k];
        }
        
        for(int i = 0; i < word.length(); i++)
        {
            
            if(word[i] == ' ' || (word[i] < 'A' || word[i] > 'Z') || word[i] == 'B' ||
               word[i] == 'C' || word[i] == 'D' ||
               word[i] == 'E' || word[i] == 'F' || word[i] == 'G' ||
               word[i] == 'J' || word[i] == 'K' || word[i] == 'L' ||
               word[i] == 'N' || word[i] == 'P' || word[i] == 'Q' ||
               word[i] == 'R' || word[i] == 'S' || word[i] == 'Z' || back != word)
            {
                flag = "NO";
                break;
            }
            
        }
   
        cout << flag << endl;
        flag = "YES";
        
    }
    return 0;
}
