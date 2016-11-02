//
//  main.cpp
//  NewHouse
//
//  Created by Lazaro Kawer on 10/16/16.
//  Copyright © 2016 Kawer. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t = 0;
    int n = 0;
    cin>>t;
    for(int r = 0; r < t; r++)
    {
        cin>>n;
        vector<string> houseA(n);
        for (int i = 0; i < n; i++)
        {
            cin>>houseA[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (houseA[0][i] =='.') {
                houseA[0][i] = '1';
            }
            else {
                houseA[0][i] = '0';
            }
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (houseA[i][j] == '.')
                {
                    if (0 == j)
                    {
                        houseA[i][j] = '1';
                        continue;
                    }
                    int max = houseA[i-1][j-1] - '0';
                    int x = 1;
                    for (x=1 ; x <= max; x++)
                    {
                        if ('0' == houseA[i][j-x]) break;
                        if ('0' == houseA[i-x][j]) break;
                    }
                    houseA[i][j] = x + '0';
                }
                else houseA[i][j] = '0';
            }
        }
        int maxHouse = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                maxHouse = max(maxHouse, houseA[i][j] - '0');
            }
        }
        cout<<maxHouse<<endl;
    }
    return 0;
}
