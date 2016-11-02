//
//  main.cpp
//  TooLongWords
//
//  Created by Lazaro Kawer on 10/22/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    cin >> n;
    string word;
    
    for(int i=0;i<n;i++){
        cin >> word;
        if(word.length()>10){
            cout << word[0] << word.length()-2 << word[word.length()-1] << endl;
        }
        else {
            cout << word << endl;
        }
    }
    
    return 0;
}
//imprimir palabras <10 asi como estan
