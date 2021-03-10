// Neu: Explizite Berechnung statt statische Werte
// Problem: nicht testbar

#include <iostream>

void fizzbuzz(int i)
{
  if ((i % 3 == 0) && (i % 5 == 0)) {
    std::cout << "Fizz Buzz" << std::endl;
  } else if (i % 3 == 0) {
    std::cout << "Fizz" << std::endl;
  } else if (i % 5 == 0) {
    std::cout << "Buzz" << std::endl;
  } else {
    std::cout << i << std::endl;
  }
}

int main()
{
  fizzbuzz(1);
  fizzbuzz(2);
  fizzbuzz(3);
  fizzbuzz(4);
  fizzbuzz(5);
  fizzbuzz(6);
  fizzbuzz(7);
  fizzbuzz(8);
  fizzbuzz(9);
  fizzbuzz(10);
  fizzbuzz(11);
  fizzbuzz(12);
  fizzbuzz(13);
  fizzbuzz(14);
  fizzbuzz(15);
}
