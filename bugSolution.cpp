#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec(10);
  int index;
  std::cout << "Enter an index (0-9): ";
  std::cin >> index;

  //Check if index is within the bounds of the vector
  if(index >= 0 && index < vec.size()) {
    bool value = vec[index];
    std::cout << "Value at index " << index << ": " << value << std::endl;
  } else {
    std::cerr << "Error: Index out of bounds!\n";
  }

  return 0;
}
