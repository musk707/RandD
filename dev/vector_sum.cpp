
#include <iostream>

#include <vector>

int  main()
{

    std::vector<int> numbers {10, 6,6, 4, 9};

    for (int  i=0; i<5; i++)
    {
        int input;

        do {

            std::cout<<"Input [" <<i<<"]:";
            std::cin>>input;


        }while (input>=10);

        numbers.push_back(input);

    }

    int sum=0;

    for (int i=0;i< numbers.size(); i++)
    {
        sum=sum+numbers[i];
        
    }

    std::cout<<"Sum of numbers is:"<<sum<<std::endl;



}