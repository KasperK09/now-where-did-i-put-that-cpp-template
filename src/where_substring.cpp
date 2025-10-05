#include <cstring>

#include "where_substring.hpp"

int sentence_miner(const char *check, const char *string)
{
  int slen = strlen(string);
  int clen = strlen(check);
  
  int end = slen - clen + 1;

  for (int i = 0; i < end; i++)
  {
    bool check_found = true;
    
    for (int j = 0; j < clen; j++)
    {
      if (check[j] != string[i + j])
      {
        check_found = false;
        break;
      }
    }
    
    if (check_found)
    {
      return i;
    } 
  }
  
  return -1;
}
