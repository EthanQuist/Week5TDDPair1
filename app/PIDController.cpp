// Copyright 2019 Copyright Ryan Bates and Pruthvikumar Sanghavi



#include "PIDController.hpp"


double PIDController::compute(double actualVelocity, double setpointVelocity) {
  double dt = 0.5;
  double previousError = 0.0; //starts as zero, but here for completeness' sake
  double initialIntegral = 0.0;
  double error = setpointVelocity - actualVelocity;
  double proportionalAspect = Kp * error;
  double integralAspect = Ki * (initialIntegral + error * dt);
  double derivativeAspect = Kd * (error - previousError) / dt;

  return proportionalAspect + integralAspect + derivativeAspect;
}
