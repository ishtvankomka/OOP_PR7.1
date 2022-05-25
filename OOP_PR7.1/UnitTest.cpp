#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Functions.h"
#include <iostream> 
#include <algorithm>
#include <vector>
#include <ctime>
#include <numeric>
TEST_CASE( "Arguments initialized") {
    srand(unsigned(time(0)));
    vector<int> v1(4);
    fill(v1.begin(), v1.begin() + 2, 1); // v1 1100
    fill(v1.begin() + 2, v1.begin() +4, 2); // v1 1122

    vector<int> v2(4);
    fill(v2.begin(), v2.begin() + 2, 2); // v2 2200
    fill(v2.begin() + 2, v2.begin() +4, 1); // v2 2211
    
    Reverse(v1); // v1 2211
        
    REQUIRE( v1 == v2 );
}
