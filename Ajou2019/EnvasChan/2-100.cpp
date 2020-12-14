#include "선택.h"

#ifdef acm17225

//https ://www.acmicpc.net/problem/17225

#include <iostream>
#include <vector>
#include <algorithm>
#include<array>
using namespace std;

// 140점 만점에 100점 답안지

struct customer
{
    int time = 0;
    char text = 0;
    int m = 0;
};

bool compare(customer lhs, customer rhs)
{
    return lhs.time > rhs.time;
}

int main()
{
    int num = 0;
    int  a = 0;
    int b = 0;
    int n = 0;

    vector<int> an;//지수
    vector<int> bn;//세훈
    array<customer, 1001> consumer;

    cin >> a >> b >> n;

    for (int i = 0; i < n; i++)
    {
        int ti = 0;
        int mi = 0;
       char color = 0;

       cin >> ti >> color >> mi;

       consumer[i].time = ti;
       consumer[i].text = color;
       consumer[i].m =mi;
    }
        
    //sort(consumer.begin(), consumer.end(), compare);

    for (int i = 0; i < n; i++)
    {
        if (consumer[i].text == 'R')
        {
            for (int j = 0; j < consumer[i].m; j++)
            {
                num += 1;
                an.push_back(num);
            }
        }
        if (consumer[i].text == 'B')
        {
            for (int j = 0; j < consumer[i].m; j++)
            {
                num += 1;
                bn.push_back(num);
            }
            
        }
    }

    cout << bn.size() << endl;
    for (int i = 0; i < bn.size(); i++)
    {
        cout << bn[i] << " ";
    }

    cout << endl;

    cout << an.size() << endl;

    for (int i = 0; i < an.size(); i++)
    {
        cout << an[i] << " ";
    }
   

    

    return 0;
}

#endif