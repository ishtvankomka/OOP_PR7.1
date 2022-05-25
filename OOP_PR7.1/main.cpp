#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <numeric>
#include "Functions.h"
using namespace std;

int main() {
    srand(unsigned(time(0)));
    int n;
    cout << "n = ? "; cin >> n;
    vector<int> v(n);
    generate(v.begin(), v.end(), RandomNumber);
    print(v);
    
    Reverse(v);
    print(v);
    return 0;
}
