#include <iostream>
#include <cstring>

#include "where.hpp"


int sentence_miner(char character, const char *string)
{
    int length = std::strlen(string);
    for (int i = 0; i < length; i++)
    {
        if (string[i] == character)
        {
            return i;
        }
    }
    return -1;
}
