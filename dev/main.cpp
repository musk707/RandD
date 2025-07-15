
#include<iostream>

int main()
{
    // unsigned int num1=10, num2 = 20;

    // unsigned int option =12, mask =2;

    // unsigned int result = (option >> mask);

    // unsigned int sum = num1 +num2;

    unsigned int num1,num2;

    std::cout<<"Input num1:";
    std::cin>>num1;
    std::cout<<"Input num2:";
    std::cin>>num2;
    unsigned int result = (num1 >> num2);
    std::cout<<"result:" << result << std::endl;

    // std::cout<<"Hello World!"<<std::endl;

    return 0;

}

