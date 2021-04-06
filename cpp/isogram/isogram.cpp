#include "isogram.h"

#include <cctype>
#include <map>

namespace isogram {
bool is_isogram(const std::string s) {
  std::map<char, int> m;
  for (char c : s) {
    if (!std::isalpha(c)) {
      continue;
    }
    c = std::toupper(c);
    m[c] += 1;
    if (m[c] > 1) {
      return false;
    }
  }
  return true;
}

}  // namespace isogram