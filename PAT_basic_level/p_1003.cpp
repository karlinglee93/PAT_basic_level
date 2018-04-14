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
    int M, N, count = 0;
    cin >> M >> N;
    
    // 质数从2开始
    for(int i = 2; count <= N; i++)
    {
        int temp = 0;
        // 判断素数的方法
        /*不用埃拉托斯特尼筛法：
         根据素数的定义，判断数n是不是素数，我们只需要从i=2开始，
         判断n能不能被n整除，一直到n-1，如果可以则说明不是素数。
         另一方面，一个数若是合数，则一定能写成两个因数相乘的形式，并且两个因数中较小的那个一定小于
         等于sqrt(n)，否则两个因数的乘积大于n，因为i的终止条件可以设为sqrt(n)，这种方法的时间复杂度
         为O（n的1.5次方）。空间复杂度为O(1)。*/
        for(int j = 2; j <= sqrt(i); j++)
            if(i % j == 0)
                temp++;
        if(temp == 0)
            count++;
        if(count >= M && count <= N && temp == 0)
        {
            cout << i;
            if((count - M) % 10 == 9)
                cout << endl;
            else if(count != N)
                cout << ' ';
        }
    }
}
