//
//  p_1002.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/14.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

// 不知道int 如何转换成char
// 要学会int 如何‘巧妙’转化成char
#include "Header.h"

using namespace std;

void p_1002()
{
    unsigned N;
    while(cin >> N && N > 1000)
        cout << "cin again " << endl;
    unsigned * arr = new unsigned [1000];       // 原表达式VS2017 报错，原因是T 为变量
    unsigned temp;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        if(temp <= 1000)
            arr[i] = temp;
        else
            i--;
    }
    
    int A1 = 0, A2 = 0, A3 = 0,A5 = 0;
    double A4 = 0.0;
    int p = 0, n = 0, n1 = 0;
    for(int i = 0; i < N; i++)
    {
        if(arr[i] % 5 == 0 && arr[i] % 2 == 0)
            A1 += arr[i];
        if(arr[i] % 5 == 1)
        {
            A2 += pow(-1, p++) * arr[i];
        }
        if(arr[i] % 5 == 2)
            n++;
        if(arr[i] % 5 == 3)
        {
            A4 += arr[i];
            n1++;
        }
        if(arr[i] % 5 == 4 && arr[i] >= A5)
        {
            A5 = arr[i];
        }
    }
    A3 = n;
    if(n1 != 0)     // 注意n1 可能为0 的情况
        A4 /= n1;
    
    A1 != 0 ? (cout << A1 << ' ') : (cout << "N ");     // 巧妙的将int ‘转换为’ char
    A2 != 0 ? (cout << A2 << ' ') : (cout << "N ");
    A3 != 0 ? (cout << A3 << ' ') : (cout << "N ");
    A4 != 0 ? (cout << fixed << setprecision(1) << A4 << ' ') : (cout << "N ");     // iomanip 中fixed 与 setprecision() 结合的用法
    A5 != 0 ? (cout << A5) : (cout << "N");
    
    delete [] arr;
}
