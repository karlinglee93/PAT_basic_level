//
//  p_1010.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/5/21.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//
// 两个思路，一是创建一个三维数组，使得其第三维排序；二是循环N次找最大值；感觉都挺麻烦的。
// 看了答案以后感觉结构体数组很适用。
#include "Header.h"

using namespace std;

void p_1010()
{
    int N, D;
    cin >> N >> D;
    
    int stock[N];
    int value[N];
    double price[N];
    for (int i = 0; i < N; i++)
    {
        cin >> stock[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> value[i];
    }
    for (int i = 0; i < N; i++)
    {
        price[i] = ((double)value[i]) / ((double)stock[i]);
    }
    
    double sum = 0.0;
    while (D >= 0)
}
