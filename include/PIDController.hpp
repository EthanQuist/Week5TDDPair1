/* Copyright 2019 Copyright Ryan Bates and Pruthvikumar Sanghavi
 *@file PIDController.hpp
 *
 * @brief Header file for PID Controller Class
 * This class contains a simple PID controller with three gains (proportional, integral, derivative) and can compute output using velocity and setpoint
 * @author Ethan Quist (author) Aruna Baijal (navigator) [pair 1]
 * @copywrite UMD Student Work
 */

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_

class PIDController {
 private:
    double Kp;
    double Ki;
    double Kd;

 public:
    PIDController(double KpInput, double KiInput, double KdInput) {
            Kp = KpInput;
            Ki = KiInput;
            Kd = KdInput;
        }
    /* @brief function to compute the output using controller gains and inputs actual velocity and setpoint velocity
     * @param double actual velocity - the velocity measured by the system
     * @param double setpoint velocity - the velocity desired by the user
     * @return  double - the output of the controller, computed using the controller gains and the inputs
     */
    double compute(double actualVelocity, double setpointVelocity);
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_
