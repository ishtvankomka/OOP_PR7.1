#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <numeric>
using namespace std;

int RandomNumber()
{
    return (std::rand() % 100);
}

void print(vector<int> a)
{
    for (int i : a)
        cout << i << " ";
    cout << endl;
}

void Reverse(vector<int> &v)
{
    reverse(v.begin(), v.end());
}
