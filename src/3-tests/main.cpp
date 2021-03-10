#include <iostream>
#include <string>
#include <vector>

#define CATCH_CONFIG_MAIN// This tells the catch header to generate a main
#include <catch2/catch.hpp>

TEST_CASE("Fizz Buzz", "[fizzbuzz]")
{
  const std::vector<const std::string> werte{
    { "1" },
    { "2" },
    { "Fizz" },
    { "4" },
    { "Buzz" },
    { "Fizz" },
    { "7" },
    { "8" },
    { "Fizz" },
    { "Buzz" },
    { "11" },
    { "Fizz" },
    { "13" },
    { "14" },
    { "Fizz Buzz" }
  };

  REQUIRE(werte[0] == "1");
  REQUIRE(werte[1] == "2");
  REQUIRE(werte[2] == "Fizz");
  REQUIRE(werte[3] == "4");
  REQUIRE(werte[4] == "Buzz");
  REQUIRE(werte[5] == "Fizz");
  REQUIRE(werte[6] == "7");
  REQUIRE(werte[7] == "8");
  REQUIRE(werte[8] == "Fizz");
  REQUIRE(werte[9] == "Buzz");
  REQUIRE(werte[10] == "11");
  REQUIRE(werte[11] == "Fizz");
  REQUIRE(werte[12] == "13");
  REQUIRE(werte[13] == "14");
  REQUIRE(werte[14] == "Fizz Buzz");

  // Nachteil: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
}
