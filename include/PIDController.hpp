



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
