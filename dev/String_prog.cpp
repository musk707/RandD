#include<iostream>
#include<string>
#include<boost/algorithm/string.hpp>

int main()
{

//  std::string str1=  "Hello, dummy World! dummy ";

// //  boost::algorithm::erase_all(str1, "World");
//  std::string updated = boost::algorithm::erase_all_copy(str1, "World");

//  std::cout << str1 << std::endl; // Output: Hello, !
//  std::cout << updated << std::endl; // Output: Hello, !

//  //replace all copy
//  std::string str2 = boost::algorithm::replace_all_copy(str1, "dummy", "test");

//  std::cout << str2 << std::endl; // Output: Hello, test World! test




std::vector<std::string> data = {"Hello", "World", "dummy", "test"};
std::string str= boost::algorithm::join(data, " ");

std::cout << str << std::endl; // Output: Hello, World, dummy, test

std::vector<std::string> split_result;
boost::algorithm::split(split_result, str, boost::is_any_of(" "));
std::cout << "Split result: ";
for(const auto& s : split_result) {
	std::cout << s << " ";
}
std::cout << std::endl;
return 0;


}