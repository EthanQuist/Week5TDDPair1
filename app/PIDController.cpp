



#include "PIDController.hpp"


double PIDController::compute(double actualVelocity, double setpointVelocity){

/*
error = setpoint - measured_value
integral = integral + error * dt
derivative = (error - previous_error) / dt
output = Kp * error + Ki * integral + Kd * derivative

We have assumed integral and previous error to be 0.0, dt to be 0.5 as mentioned in the activity diagram.
*/
	double dt = 0.5;
	double previousError = 0.0;
	double initialIntegral = 0.0;

	double error = setpointVelocity - actualVelocity;

	

	double proportionalAspect = Kp * error;
	double integralAspect = Ki * (initialIntegral + error * dt);
	double derivativeAspect = Kd * (error - previousError) / dt;


	return proportionalAspect + integralAspect + derivativeAspect;
}
