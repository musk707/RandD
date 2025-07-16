#include <iostream>
#include <array>


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

    std::array<int, 5> numbers;

    for(int i=0;i <5;i++)
    {
         int input;

        do{

        std::cout<<"Input ["<<i<<"]:";
        std::cin>>input;

        }while (input >=10);

        numbers[i]=input;
    }

    int sum=0;

    for (int n:numbers)
    {
        sum+=n;
        
    }
   std::cout<<"Sum of numbers is:"<<sum<<std::endl;





}