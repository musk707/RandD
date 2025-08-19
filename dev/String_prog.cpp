#include<iostream>
#include<string>
#include<boost/algorithm/string.hpp>

int main()
{

 std::string str1=  "Hello, World!";

//  boost::algorithm::erase_all(str1, "World");
 std::string updated = boost::algorithm::erase_all_copy(str1, "World");

std::cout << str1 << std::endl; // Output: Hello, !
 std::cout << updated << std::endl; // Output: Hello, !
 return 0;


}