#include <iostream>
#include "print_result.hpp"

void PrintClass::print_result(std::string result_type, float result_value)
{
    std::cout<< result_type <<" result:\t"<< result_value<< "\n";
}
