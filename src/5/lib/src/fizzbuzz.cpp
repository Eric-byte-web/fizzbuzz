#include "fizzbuzz/fizzbuzz.h"

std::string fizzbuzz(int i)
{
    if ((i % 3 == 0) && (i % 5 == 0)) {
        return "Fizz Buzz";
    } else if (i % 3 == 0) {
        return "Fizz";
    } else if (i % 5 == 0) {
        return "Buzz";
    } else {
        return std::to_string(i);
    }
}
