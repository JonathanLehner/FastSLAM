#ifndef PREDICT_TRUE_H
#define PREDICT_TRUE_H

#include <Eigen/Dense>

using namespace Eigen;

/// @param V is m/s
/// @param G is steering angle
/// @param WB = WHEELBASE	 
void predict_true(VectorXf &xv,float V,float G,int WB,float dt); 
	
#endif //PREDICT_TRUE_H
