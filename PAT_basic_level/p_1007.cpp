//
//  p_1007.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/15.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

void p_1007()
{
    using namespace std;
    
    long long A = 1, Q = 1;
    long long B = 1, R = 1;
    
    cin >> A >> B;
    R = A % B;
    Q = (A - R) / B;
    cout << Q << ' ' << R;
}
