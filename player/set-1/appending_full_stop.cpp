#include <iostream>
#include <string>

int main()
{
  std::string str;
  
  getline (std::cin, str);
  
  str.append(1, '.');
  
  std::cout << str << "\n";
  
  return 0;
  
}
