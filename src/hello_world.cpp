#include <iostream>
#include <string>

std::string get_greeting(const std::string& name) {
  return "Hello, " + name + "!";
}

int main() {
  std::cout << get_greeting("world") << std::endl;
  return 0;
}

