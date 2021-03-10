// Aufgabe: Überlegen, wie man Funktion fizzbuzz testen kann

#include <iostream>
#include <string>

std::string fizzbuzz(int i)
{
  if ((i % 3 == 0) && (i % 5 == 0)) {
    return "Fizz Buzz";
  } else if (i % 3 == 0) {
    return << "Fizz";
  } else if (i % 5 == 0) {
    return "Buzz";
  } else {
    return std::to_string(i);
  }
}

#define CATCH_CONFIG_MAIN// This tells the catch header to generate a main
#include <catch2/catch.hpp>
