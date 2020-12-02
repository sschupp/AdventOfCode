#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm>

int main () {
  std::ifstream input("day1_input.txt");
  std::vector<int> numbers;
  
  if(input.is_open()) {
    int value;
    while(input >> value) {
      numbers.push_back(value);
    }
    input.close();
  }

  for(const auto& lvalue: numbers) {
    for(const auto& rvalue: numbers) {
      if((lvalue + rvalue) == 2020) {
        std::cout << lvalue << " * " << rvalue << " = " << lvalue*rvalue << std::endl;;
      }
    }    
  }

  for(const auto& lvalue: numbers) {
    for(const auto& mvalue: numbers) {
      for(const auto& rvalue: numbers) {
        if((lvalue + mvalue +rvalue) == 2020) {
          std::cout << lvalue << " * " << mvalue << " * " << rvalue << " = " << lvalue*mvalue*rvalue << std::endl;;
        }
      }
    }    
  }

  return 0;
}

