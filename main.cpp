#include <iostream>
#include "my_math/addition.h"
#include "my_math/division.h"
#include "my_print/print_result.h"


int main()
{	float first_no, second_no, result_add, result_div;
	std::cout<< "Please enter first_no\t";
	std::cin>> first_no;
	std::cout<< "Please enter second_no\t";
	std::cin>> second_no;	
	
	result_add = add_function(first_no,second_no);
	result_div = div_function(first_no,second_no);
	
	print_result("addition",result_add);
	print_result("division",result_div);
	return 0;
}
