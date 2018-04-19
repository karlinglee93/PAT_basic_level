//
//  p_1008.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/19.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

using namespace std;

void p_1009()
{
    string str, str1, str2;
    getline(cin, str);
    str1 = str2 = str;
    
    char tmp;
    
    while (str != "6174")
    {
        for (int i = 3; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (str1[j] < str1[j+1])
                {
                    tmp = str1[j];
                    str1[j] = str1[j+1];
                    str1[j+1] = tmp;
                }
            }
            cout << str1[3-i];
        }
        
        cout << " - ";
        
        for (int i = 3; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (str2[j] > str2[j+1])
                {
                    tmp = str2[j];
                    str2[j] = str2[j+1];
                    str2[j+1] = tmp;
                }
            }
            cout << str2[3-i];
        }
        
        cout << " = ";
        
        for (int i = 3 ; i <= 0; i++)       // 减法运算
        {
            if (str1[i] >= str2[i])
            {
                str[i] = str1[i] - str2[i];
            }
            else
            {
                str[i] = str1[i] - str2[i] + 10;
            }
            cout << str[i];
        }
        cout << endl;
    }
}

