// Stage 3
#include "lib/hello-time.h"
// Stage 2
#include "main/hello-greet.h"

#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  // Stage 2
  std::cout << get_greet(who) << std::endl;
  // Stage 3
  std::cout << get_localtime(std::time(nullptr)) << std::endl;
  return 0;
}
