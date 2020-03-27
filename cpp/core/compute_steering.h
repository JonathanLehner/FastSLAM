#ifndef COMPUTE_STEERING_H
#define COMPUTE_STEERING_H

#include <Eigen/Dense>

using namespace Eigen;

/*!
	Motion Model. Required for prediction step.
	@param[in] 	x 		State vector.
	@param[in] 	wp 		waypoints.
	@param[out] iwp 	index to current waypoint.
	@param[in] 	minD 	minimum distance to current waypoint before switching to next.
	@param[out] G 		current steering angle.
	@param[in] 	rateG 	max steering rate (rad/s).
	@param[in] 	maxG 	max steering angle (rad).
	@param[in] 	dt 		timestep.
 */
void compute_steering(Vector3d x, MatrixXd wp, int& iwp, double minD, 
						double& G, double rateG, double maxG, double dt);

#endif //COMPUTE_STEERING_H
