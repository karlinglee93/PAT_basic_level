//
//  p_1006.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/15.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

using namespace std;

void p_1006()
{
//    char * A = {};
//    char * B = {};
    string A;
    string B;
    char DA, DB;
    int sum_A = 0, sum_B = 0;
    int count_A = 0, count_B = 0;
    
    // 当明确string 或char * 长度时, 该如何输入
    // 答: getline(cin, str) 不用输入长度, cin.getline(ch *, int) 需要输入长度
    // 当为string 或char * 类型时， 可否用cin 作为输入
    // 答: string 应该可以, char * 貌似不行
//    cin >> A >> DA >> B >> DB;
//    cin.getline(A, 10000000000);
//    cin >> DA;
//    cin.getline(B, 10000000000);
//    cin >> DB;
    
    // 因为输入有空格, 所以不用getline(), cin.getline() 等
//    getline(cin, A);
    cin >> A;
    cin >> DA;
//    cin.get();
//    getline(cin, B);
    cin >> B;
    cin >> DB;
    cin.get();

    for(int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] == DA)
        {
            sum_A += pow(10, count_A) * (A[i] - '0');
            count_A++;
        }
    }
    for(int i = 0; B[i] != '\0'; i++)
    {
        if(B[i] == DB)
        {
            sum_B += pow(10, count_B) * (B[i] - '0');
            count_B++;
        }
    }
    cout << sum_A + sum_B;
}
