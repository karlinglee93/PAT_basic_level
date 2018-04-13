//
//  main.cpp
//  PAT_basic_level
//
//  Created by 李嘉宁 on 2018/4/13.
//  Copyright © 2018年 李嘉宁. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>      // iomanip 中 fixed & setprecision(1) 结合的用法，将保留一位小数（注意题目中 输出例子 的小数位数!) p_1002

using namespace std;

// practice 1001
void p_1001()
{
    unsigned int T = 0;
    
    //    cout << "Enter T: ";
    while(cin >> T && T > 10)
        cout << "unsigned T <= 10, please enter T again: ";
    
    long A[T];
    long B[T];
    long C[T];
    
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
}

// practice 1002
// 不知道int 如何转换成char
// 要学会int 如何‘巧妙’转化成char
void p_1002()
{
    unsigned N;
    while(cin >> N && N > 1000)
        cout << "cin again " << endl;
    unsigned arr[N];
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
}

int main(int argc, const char * argv[])
{
    p_1002();
    
    return 0;
}

