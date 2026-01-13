
#include <iostream>
#include "service.hpp"

int main()
{
    Service s;

    std::cout << s.name() << "\n";
    std::cout << s.compute(5) << "\n";
}

