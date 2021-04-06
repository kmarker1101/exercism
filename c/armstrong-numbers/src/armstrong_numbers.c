#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate) {
  int tmp, mod, n = 0;
  tmp = candidate;
  float result = 0.0;

  for (tmp = candidate; tmp != 0; ++n) {
    tmp /= 10;
  }

  for (tmp = candidate; tmp != 0; tmp /= 10) {
    mod = tmp % 10;
    result += pow (mod, n);
  }

  if ((int)result == candidate) {
    return true;
  }
  else {
    return false;
  }
}
