#include <iostream>

#include "Config.h"

int main() {
  std::cout << "LibInput" << ' ' << version::major << '.' << version::minor
            << '.' << version::patch << '\n';
}
