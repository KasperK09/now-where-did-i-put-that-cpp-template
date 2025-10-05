#include <iostream>

#include "src/where.hpp"
#include "src/where_substring.cpp"

int main()
{
  char string[] = "This is my test string.";
  char test_substring[] = "test";
  char test_char = 'e';

  int index = sentence_miner(test_substring, string);
  
  if (index != -1)
    {
      std::cout << "\"" << test_substring << "\" found at index " << index << " in \"" << string << "\"" << std::endl;
    } else {
      std::cout << "\"" << test_substring << "\" not found in \"" << string << "\"" << std::endl;
    }

  sentence_miner(test_char, string);

    return 0;

}
