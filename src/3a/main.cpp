#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <map>

#include <fmt/format.h>

void print(const std::string s)
{
  fmt::print("{}\n", s);
}

int main()
{
  {
    // Ansatz 1: primitives (Built-In-)Array
    // - Nachteil: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
    const std::string werte[]{
      "1",
      "2",
      "Fizz",
      "4",
      "Buzz",
      "Fizz",
      "7",
      "8",
      "Fizz",
      "Buzz",
      "11",
      "Fizz",
      "13",
      "14",
      "Fizz Buzz"
    };

    for (const auto wert : werte) { print(wert); }
  }
  {
    // Ansatz 2: std::array aus Standardbibliothek (starre/statische Liste)
    // - Nachteil 1: Groesse muss angegeben werden
    // - Nachteil 2: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
    const std::array<std::string, 15> werte{
      "1",
      "2",
      "Fizz",
      "4",
      "Buzz",
      "Fizz",
      "7",
      "8",
      "Fizz",
      "Buzz",
      "11",
      "Fizz",
      "13",
      "14",
      "Fizz Buzz"
    };

    for (const auto wert : werte) { print(wert); }
  }
  {
    // Ansatz 3: dynamischer Liste (std::vector)
    // Nachteil: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
    const std::vector<std::string> werte{
      "1",
      "2",
      "Fizz",
      "4",
      "Buzz",
      "Fizz",
      "7",
      "8",
      "Fizz",
      "Buzz",
      "11",
      "Fizz",
      "13",
      "14",
      "Fizz Buzz"
    };

    for (const auto wert : werte) { print(wert); }
  }

  {
    // Ansatz 4: Dictionary (std::map)
    std::map<int, std::string> werte{
      { 1, "1" },
      { 2, "2" },
      { 3, "Fizz" },
      { 4, "4" },
      { 5, "Buzz" },
      { 6, "Fizz" },
      { 7, "7" },
      { 8, "8" },
      { 9, "Fizz" },
      { 10, "Buzz" },
      { 11, "11" },
      { 12, "Fizz" },
      { 13, "13" },
      { 14, "14" },
      { 15, "Fizz Buzz" }
    };
     for (const auto wert : werte) { print(wert.second); }
  }
}
