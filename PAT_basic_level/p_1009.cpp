//
//  p_1008.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/19.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

using namespace std;

string subtraction(string str1, string str2)
{
    // <string> stoi() 将字符串转为int
    int result = stoi(str1) - stoi(str2);
    // <string> to_string() 将数值 转为字符串
    string tmp = to_string(result);
    // 小于4位的整数, 补0
    while (tmp.size() < 4)
        tmp += "0";
    
    return tmp;
}

void p_1009()
{
    string str, max, min;
    cin >> str;
    // 小于4位的整数, 补0
    while (str.size() < 4)
        str += "0";
    max = min = str;
    
    // 利用sort() 函数(默认从小到大排序), 与.begin(), .end()相互配合
    sort(min.begin(), min.end());
    sort(max.begin(), max.end());
    // reverse() 函数, 将字符串从后往前排序
    reverse(max.begin(), max.end());
    
    if (max == min)
        cout << max << " - " << min << " = 0000";
    else
    {
        while (subtraction(max, min) != "6174")
        {
            string tmp = subtraction(max, min);
            cout << max << " - " << min << " = " << tmp << endl;
            max = min = tmp;
            sort(min.begin(), min.end());
            sort(max.begin(), max.end());
            reverse(max.begin(), max.end());
        }
        cout << max << " - " << min << " = " << subtraction(max, min);
    }
}

