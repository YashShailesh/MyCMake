#include <iostream>
#include "math.hpp"
#include "print_result.hpp"


int main()
{	
	float first_no, second_no, result_add, result_div;

    /* Create objects of classes */
    PrintClass print;
    MathClass math;

	std::cout<< "Please enter first_no\t";
	std::cin>> first_no;
	std::cout<< "Please enter second_no\t";
	std::cin>> second_no;	
	
	result_add = math.add_function(first_no,second_no);
	result_div = math.div_function(first_no,second_no);
	
	print.print_result("addition",result_add);
	print.print_result("division",result_div);
	return 0;
}
