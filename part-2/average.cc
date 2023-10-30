// Kayla Mu
// kmu@csu.fullerton.edu
// @original-usernameeeeeee
// Partners: @JacksonCao04

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double total{0};
  int n{0};
  bool first{true};
  for (std::string argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double number(std::stod(argument));
    total += number;
    ++n;
  }

  double average = total / n;

  std::cout << "average = " << average << "\n";

  return 0;
}
