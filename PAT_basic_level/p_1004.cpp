//
//  p_1004.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/14.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

void p_1004()
{
    using namespace std;
    
    char ch[4][61];
    string day[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    // ! 找到第一个相同的大写字符后怎么接着找第二个字符而不是从新开始找
    bool first = true;

    for(int i = 0; i < 4; i++)
    {
        cin >> ch[i];
    }
 
    // ! 判断两个是否有一个为空
    for(int i = 0; ch[0][i] && ch[1][i]; i++)
    {
        if(first && ch[0][i] >= 'A' && ch[0][i] <= 'G' && ch[0][i] == ch[1][i])     // 这里不要用isupper()
        {
            // ! 将char 转为int
            cout << day[ch[0][i] - 'A'] << ' ';
            first = false;
            // ! 找到第一个相同的大写字符后怎么接着找第二个字符而不是从新开始找
            continue;
        }
        
        if(!first && ((ch[0][i] >= 'A' && ch[0][i] <= 'N') || isdigit(ch[0][i])) && ch[0][i] == ch[1][i])
        {
            if(isdigit(ch[0][i]))
                cout << 0 << ch[0][i] - '0'<< ':';
            else if(isupper(ch[0][i]))
                cout << 1 << ch[0][i] - 'A' << ':';
            break;
        }
    }

    for(int i = 0; ch[2][i] && ch[3][i]; i++)
    {
        if(isalpha(ch[2][i]) && (ch[2][i] == ch[3][i]))
        {
            cout << i / 10 << i % 10;
            break;
        }
    }
}
