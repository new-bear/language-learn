#include <iostream>
#include <stack>
int main() {
  std::stack<int> intStack;

  for (std::size_t i = 0; i != 10; i++) {
    intStack.push(i);
  }

  while (!intStack.empty()) {
    std::cout << intStack.top() << std::endl;
    intStack.pop();
  }
}