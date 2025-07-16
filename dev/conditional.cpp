
#include <iostream>

int main()
{

    int opt;

    std::cout<<"Enter yur option \n 1. Foo\n 2.Bar \n3.Foobar\n 4.Deadbeef "<<std::endl;
    std::cin>>opt;

    switch(opt)
    {
        case 1:
            std::cout << "Selected :Foo" <<std::endl;
            break;
        case 2:
            std::cout << "Selected :Bar" <<std::endl;
            break;
        case 3:
            std::cout << "Selected :FooBar" <<std::endl;
            break;
        case 4:
            std::cout << "Selected :Dead Beaf" <<std::endl;
            break;
        default:
            std::cout << "Selected {Invalid}" <<std::endl;    
        



    }



}