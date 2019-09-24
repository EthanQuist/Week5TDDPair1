#include <iostream>
#include <lib.hpp>
#include <PIDController.hpp>



int main()
{
	PIDController controller(1, 1, 1);
		double result;

		result = controller.compute(2, 3);
		std::cout<<result;
    return 0;
}



