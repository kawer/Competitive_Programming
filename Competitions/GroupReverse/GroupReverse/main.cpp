//
//  main.cpp
//  GroupReverse
//
//  Created by Lazaro Kawer on 10/26/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int group=1, repeatThis=0;
    string word, part1, part2;
    
    while(group>0){
        int increment=0;
        cin>>group;
        if(group==0)
            break;
        else{
            cin>>word;
            repeatThis=word.length()/group;
            
            for(int i=1; i<=group; i++){
                part1=word.substr(increment, repeatThis);
                part2 = string(part1.rbegin(), part1.rend());
                cout<<part2;
                increment+=repeatThis;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
