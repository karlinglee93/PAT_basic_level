//
//  p_1008.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/19.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

using namespace std;

void p_1008()
{
    int s = 0, p = 0, f = 0;
    int c1 = 0, j1 = 0, b1 = 0;
    int c2 = 0, j2 = 0, b2 = 0;
    int N = 0;
    char jia[105], yi[105];      // 考虑过二维数组
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> jia[i] >> yi[i];
        if (jia[i] == 'C' && yi[i] == 'J')      // 考虑过C\J\B 之间的规律
        {
            s++;
            c1++;
        }
        else if (jia[i] == 'J' && yi[i] == 'B')
        {
            s++;
            j1++;
        }
        else if (jia[i] == 'B' && yi[i] == 'C')
        {
            s++;
            b1++;
        }
        else if ((jia[i] == 'C' && yi[i] == 'C') || (jia[i] == 'J' && yi[i] == 'J') || (jia[i] == 'B' && yi[i] == 'B'))
        {
            p++;
        }
        else if (jia[i] == 'C' && yi[i] == 'B')
        {
            f++;
            b2++;
        }
        else if (jia[i] == 'J' && yi[i] == 'C')
        {
            f++;
            c2++;
        }
        else if (jia[i] == 'B' && yi[i] == 'J')
        {
            f++;
            j2++;
        }
    }
    cout << s << ' ' << p << ' ' << f << endl;
    cout << f << ' ' << p << ' ' << s << endl;
    
    cout << ((((b1 >= c1) ? b1 : c1) >= j1) ? ((b1 >= c1) ? 'B' : 'C') : 'J') << ' ' << ((((b2 >= c2) ? b2 : c2) >= j2) ? ((b2 >= c2) ? 'B' : 'C') : 'J');
}
