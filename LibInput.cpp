#include <iostream>
#include <string_view>

#include "Config.h"

int main() {
  std::cout << project::name << ' ' << project::version::major << '.'
            << project::version::minor << '.' << project::version::patch
            << '\n';
  return 0;
}
