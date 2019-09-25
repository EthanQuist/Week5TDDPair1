/* @file PIDController.hpp
 *
 * @brief Header file for PID Controller Class
 * @param constructor takes in three doubles for the three gains Kp, Ki, Kd
 * @author Ethan Quist (author) Aruna Baijal (navigator) [pair 1]
 * @copywrite UMD Student Work
 */
class PIDController {
private:
	double Kp;
	double Ki;
	double Kd;

public:
	PIDController(double KpInput, double KiInput, double KdInput){
			Kp = KpInput;
			Ki = KiInput;
			Kd = KdInput;
		}
	double compute(double actualVelocity, double setpointVelocity);
};
