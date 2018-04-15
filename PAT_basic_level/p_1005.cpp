//
//  p_1005.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/15.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include "Header.h"

struct student
{
    int id;
    int score_d;
    int score_c;
    int score;
    int rank;
};

// 升序-由小到大-‘<’
// 降序-由大到小-‘>‘
bool cmp(student stu1, student stu2)
{
    if(stu1.rank != stu2.rank)
        return stu1.rank < stu2.rank;
    else if(stu1.score != stu2.score)
        return stu1.score > stu2.score;
    else if(stu1.score_d != stu2.score_d)
        return stu1.score_d > stu2.score_d;
    else
        return stu1.id < stu2.id;
}

void p_1005()
{
    using namespace std;
    
    int N = 0, L = 0, H = 0, n = 0;
    cin >> N >> L >> H;
    
    student stu[N];
    for(int i = 0; i < N; i++)
    {
        cin >> stu[i].id >> stu[i].score_d >> stu[i].score_c;
        stu[i].score = stu[i].score_d + stu[i].score_c;
        
        if(stu[i].score_d < L || stu[i].score_c < L)
        {
            stu[i].rank = 5;
            n++;
        }
        else if(stu[i].score_d >= H && stu[i].score_c >= H)
            stu[i].rank = 1;
        else if(stu[i].score_d >= H)
            stu[i].rank = 2;
        else if(stu[i].score_d >= stu[i].score_c)
            stu[i].rank = 3;
        else
            stu[i].rank = 4;
    }
    
    // <algorithm> 中的sort()
    sort(stu, stu + N, cmp);
    cout << N - n << endl;
    // 不及格的考生在数组里，但没有打印出来
    for(int i = 0; i < N - n; i++)
    {
        cout << stu[i].id << ' ' << stu[i].score_d << ' ' << stu[i].score_c << endl;
    }
}
