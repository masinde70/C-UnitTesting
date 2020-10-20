#include "max1.hpp"
#define CATCH_CONFIG_MAIN
#include<catch2/catch.hpp>

TEST_CASE("The maximum integer", "[integer]"){
    int i = 45; int x = 8;
    REQUIRE(max(i,x)>8);
}

TEST_CASE("Maximum double", "[double]"){
    double i = 23.89; double k = 0.9;
    REQUIRE(max(i,k)>0.9);
}

TEST_CASE("Maximum string", "[string]"){
    std::string s1 = "Masinde";
    std::string s2 = "Milka";
    int k, j;
    k=s1.size();
    j=s2.size();
    REQUIRE(max(k,j)>j);
}
