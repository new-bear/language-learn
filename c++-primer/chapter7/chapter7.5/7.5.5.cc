#include <string>

class Data {
public:
  int ival;
  std::string s;
};

int main() {
  Data val1 = {1, "2"}; // 合法
  //   Data val2 = {"1", 1}; // 非法
}