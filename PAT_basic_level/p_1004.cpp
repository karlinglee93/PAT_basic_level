//
//  p_1004.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/14.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

void p_weeks(char ch)
{
    
}

void p_hours(char ch)
{
    
}

void p_1004()
{
    using namespace std;
    
    char ch[4][60];
    int count = 0;

    for(int i = 0; i < 4; i++)
    {
        cin.getline(ch[i], 60);
    }
    for(int j = 0; ch[0][j] != '\0' && ch[1][j] != '\0'; j++)
    {
        if(isupper(ch[0][j]) && ch[0][j] == ch[1][j])
        {
            char temp = ch[0][j];
            p_weeks(temp);
            
            for(int k = ++j; ch[0][j] != '\0' && ch[1][j] != '\0'; k++)
            {
                if((isdigit(ch[0][j]) || isupper(ch[0][j])) && ch[0][j] == ch[1][j])
                {
                    temp = ch[0][j];
                    p_hours(temp);
                    count++;
                    break;
                }
            }
        }
        if(count != 0)
            break;
    }
}
