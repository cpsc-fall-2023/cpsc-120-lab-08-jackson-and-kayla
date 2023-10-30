// Jackson Cao
// jacksoncao@csu.fullerton.edu
// @JacksonCao04
// Partners: @original-usernameeeeeee

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "Error: You must supply three arguments." << std::endl;
    return 1;
  }

  std::string protein = argv[1];
  std::string bread = argv[2];
  std::string condiment = argv[3];

  std::cout << "Your order:\n"
            << "A " << protein << " sandwich on " << bread << " with "
            << condiment << "." << std::endl;

  return 0;
}
