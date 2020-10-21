#include<catch2/catch.hpp>

std::string one(){
   return "1"; 
}

TEST_CASE("Assert that something is true(pass)", "[require]"){
    REQUIRE( one() == "1");
}

TEST_CASE("Assert that something is true(fail)", "[require]"){
    REQUIRE( one() == "x");
}

TEST_CASE("Assert that something is true (stop at the first fail)", "[require]"){
    WARN( "REQUIRE stop at first failure:" );

    REQUIRE( one() == "x");
    REQUIRE( one() == "1");
}


TEST_CASE("Assert that something is true (continue after failure)", "[check]"){
   WARN("CHECK continues after failure: ");

   CHECK( one() == "X");
   REQUIRE( one() == "1"); 
}


TEST_CASE("Assert that something is false(stops at first failure)", "[require-false]"){
    WARN( "REQUIRE_FALSE stop at first failure:");
    
    REQUIRE_FALSE( one() == "1");
    REQUIRE_FALSE(  one() == "1");
}


TEST_CASE("Assert that something is false (continue after failure)", "[check-false]"){
    
}











