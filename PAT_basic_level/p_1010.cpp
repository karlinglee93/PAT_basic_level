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

struct PIE
{
    int stock;
    int value;
    double price;
};

// cmp 函数返回值为bool，若第一个排在第二个的前面，则返回true
// 故 a.value > b.value 代表降序；a.value < b.value 代表升序（默认的）
bool cmp(PIE a, PIE b)
{
    return a.price > b.price;
}

void p_1010()
{
    int N, D;
    cin >> N >> D;
    PIE pie[N];
    
    for (int i = 0; i < N; i++)
    {
        cin >> pie[i].stock;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> pie[i].value;
    }
    for (int i = 0; i < N; i++)
    {
        pie[i].price = ((double)pie[i].value) / ((double)pie[i].stock);
    }
    
    double sum = 0.0;
    
    // 用sort() 排序后如何处理？
    // 结构体貌似不能用pie.start() 和pie.end();
    // cmp 函数的使用方法
    sort(pie, pie+N, cmp);
    // 对sort() 的理解还是不够
    
    for (int i = 0; i < N; i++)
    {
        if (D >= pie[i].stock)
        {
            sum += pie[i].value;
            D -= pie[i].stock;
        }
        else
        {
            sum += D * pie[i].price;
            break;
        }
    }
    cout << fixed << setprecision(2) << sum;
}
