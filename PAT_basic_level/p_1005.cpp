//
//  p_1005.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/15.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

void p_1005()
{
    using namespace std;
    
    int N = 0, L = 0, H = 0, count = 0;
    cin >> N >> L >> H;
    int * stu[4];
    
    // stu[i][4] 记录此人是第几类考生, stu[i][4] == 1 是第一类, == 0 是没过的, 以此类推
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> stu[i][j];
        }
        if(stu[i][1] >= H && stu[i][2] >= H)
        {
            stu[i][3] = 1;
            count++;
        }
        else if(stu[i][1] >= H && stu[i][2] < H && stu[i][2] >= L)
        {
            stu[i][3] = 2;
            count++;
        }
        else if(stu[i][1] < H && stu[i][2] < H && stu[i][1] >= L && stu[i][2] >=L && stu[i][1] >= stu[i][2])
        {
            stu[i][3] = 3;
            count++;
        }
        else if(stu[i][1] >= L && stu[i][2] >= L)
        {
            stu[i][3] = 4;
            count++;
        }
    }
    
    // 设计到数组之间的排序问题, 有点头晕
    // 如何通过数组元素的比较, 使得在数组之间进行排序呢?
    int MAX = 0;
    for(int i = 0; i < N; i++)
    {
        if(stu[i][3] == 1)
        {
            MAX = stu[i][1] + stu[i][2];
        }
    }
}
