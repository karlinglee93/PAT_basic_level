//
//  p_1011.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/5/28.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

using namespace std;

void p_1011()
{
    char N[1000];
    cin >> N;
    
    int arr[10] = {};
    for (int i = 0; N[i] != '\0'; i++)
    {
        switch (N[i] - '0') {
            case 0:
                arr[0]++;
                break;
            case 1:
                arr[1]++;
                break;
            case 2:
                arr[2]++;
                break;
            case 3:
                arr[3]++;
                break;
            case 4:
                arr[4]++;
                break;
            case 5:
                arr[5]++;
                break;
            case 6:
                arr[6]++;
                break;
            case 7:
                arr[7]++;
                break;
            case 8:
                arr[8]++;
                break;
            case 9:
                arr[9]++;
                break;
        }
    }
    for (int i = 0; i <10; i++)
    {
        if (arr[i] == 0)
            continue;
        cout << i << ':' << arr[i] << endl;
    }
}
