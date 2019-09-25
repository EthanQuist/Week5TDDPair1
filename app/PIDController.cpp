



#include "PIDController.hpp"


double PIDController::compute(double actualVelocity, double setpointVelocity){

	double dt = 0.5;
	double previousError = 0.0;
	double initialIntegral = 0.0;

	double error = actualVelocity - setpointVelocity;

	double proportionalAspect = Kp * error;
	double integralAspect = Ki * initialIntegral;
	double derivativeAspect = Kd * (error - previousError);


	return proportionalAspect + integralAspect + derivativeAspect;
}
