//
//  p_1001.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/14.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

using namespace std;

void p_1001()
{
    unsigned int T = 0;
    
    //    cout << "Enter T: ";
    while(cin >> T && T > 10)
        cout << "unsigned T <= 10, please enter T again: ";
    
    long * A = new long [10];       // 原表达式VS2017 报错，原因是T 为变量
    long * B = new long [10];
    long * C = new long [10];
    
    for(int i = 0; i < T; i++)
    {
        //        cout << "Enter A, B, C: " << endl;
        cin >> A[i] >> B[i] >> C[i];
    }
    
    for(int i = 0; i< T; i++)
    {
        if(A[i] + B[i] > C[i])
            cout << "Case #" << i+1 << ": " << "true" << endl;
        else
            cout << "Case #" << i+1 << ": " << "false" << endl;
    }
    
    delete [] A;
    delete [] B;
    delete [] C;
}
