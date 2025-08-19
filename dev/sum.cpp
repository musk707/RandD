#include <iostream>
#include <array>
#include <vector>
#include <algorithm>  
int main()
{
    // std::array<int, 10> numbers ={8,2,1,2,1,2,2,1,2,2};

    // for (int i=0; i<10;i++)
    // {
    //     std::cout<<numbers[i]<<" ";

    // }
    // std::cout<<std::endl;

    // for (int n:numbers)
    // {

    //     std::cout<<n<<" ";

    // }
    // std::cout<<std::endl;

    // std::array<int, 5> numbers;

    std::vector<int> numbers ={8,2,1,2,1,2,2,1,2,2};

    for(int i=0;i <5;i++)
    {
         int input;

        do{

        std::cout<<"Input ["<<i<<"]:";
        std::cin>>input;

        }while (input >=10);

        numbers.push_back(input);
    }

    // int sum=0;
    std::sort(numbers.begin(),numbers.end());
    for (int n:numbers)
    {
        std::cout<<n<<" ";
    }
//    std::cout<<"Sum of numbers is:"<<sum<<std::endl;





}