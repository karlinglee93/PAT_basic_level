//
//  p_1007.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/15.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//


/* 基本思想是手算除法的过程,
 比如100/2: 等价于1/2, 商为0, 余数为1, 商为0的情况下不能输输出,
 然后余数和下一位: 即0, 组合为1*10+0=10, 就变成10/2, 商为5余数为0,此时输出商数.
 然后0和下一位0组合为0*10+0=0, 0/2余数为0, 此时运算完毕。 */
#include "Header.h"

void p_1007()
{
    using namespace std;
    
    string A;
    char Q;
    int B, R = 0;
    int current;
    
    cin >> A >> B;
    
    if(A.length() == 1 && (A[0] - '0') < B)
        cout << 0 << ' ' << A[0] - '0';
    else
    {
        for(int i = 0; i < A.length(); i++)
        {
            // 当前的被除数
            current = R * 10 + (A[i] - '0');
            // 除数
            Q = current / B + '0';
            // 余数
            R = current % B;
            
            // 当除数以0开头时，则不打印
            if(i == 0 && Q == '0')
                continue;
            else
                cout << Q;
        }
        cout << ' ' << R;
    }
}
