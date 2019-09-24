#include <gtest/gtest.h>
#include <PIDController.hpp>

TEST(PIDController, shouldCompute){

	PIDController controller(1, 1, 1);
	double result;

	result = controller.compute(2, 3);

	ASSERT_EQ(3.5, result);



}


TEST(PIDController, negativeCompute){

	PIDController controller(2, 2, 2);
	double result;

	result = controller.compute(-10, -11);

	ASSERT_EQ(-7, result);

}


