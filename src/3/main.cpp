#include <iostream>
#include <string>
#include <vector>

void print(const std::string s)
{
  std::cout << s << std::endl;
}

int main()
{
  const std::vector<std::string> werte{
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

  print(werte[0]);
  print(werte[1]);
  print(werte[2]);
  print(werte[3]);
  print(werte[4]);
  print(werte[5]);
  print(werte[6]);
  print(werte[7]);
  print(werte[8]);
  print(werte[9]);
  print(werte[10]);
  print(werte[11]);
  print(werte[12]);
  print(werte[13]);
  print(werte[14]);
}
