//
//  p_1003.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/14.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

using namespace std;

void p_1003()
{
    int M = 0, N = 0;
    int * arr = new int [10000];
    int len = 0;
    int i = 0, j = 0;
    cin >> M >> N;
    
    // 质数从2开始
    for(i = 2; len < N; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
        }
        
        // 判定是否为质数的关键条件
        if(i <= j)
            arr[len++] = i;
    }

    // ？？？输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。
    int num = 1;

    for(i = M - 1; i < N; i++)
    {
        // 输出格式错误。。。坑的一匹。。。
        cout << arr[i];
        if(num % 10 != 0 && i != N - 1)
            cout << ' ';
        else if(num % 10 == 0)
            cout << endl;
        num++;
    }
    
    delete [] arr;
}
