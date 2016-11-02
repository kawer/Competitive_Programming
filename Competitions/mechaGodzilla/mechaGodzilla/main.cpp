//
//  main.cpp
//  mechaGodzilla
//
//  Created by Lazaro Kawer on 10/4/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int cases, gSoldiers, mSoldiers, gPower, mPower;
    
    cin >> cases;
    for(int i = 0; i < cases; i++) {
        cin >> gSoldiers >> mSoldiers;
        int gLocalPower = 0;
        for(int i = 0; i < gSoldiers; i++){
            cin >> gPower;
            if(gPower > gLocalPower)
                gLocalPower = gPower;
        }
        
        int mLocalPower = 0;
        for(int i = 0; i < mSoldiers; i++){
            cin >> mPower;
            if(mPower > mLocalPower)
                mLocalPower = mPower;
        }
        
        if(mLocalPower > gLocalPower){
            cout << "MechaGodzilla" << endl;
        } else{
            cout << "Godzilla" << endl;
        }
        
        gSoldiers = 0;
        mSoldiers = 0;
        gPower = 0;
        mPower = 0;

    }
    return 0;
}
