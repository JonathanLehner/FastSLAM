#include "add_feature.h"

//
// add new features
//
void add_feature(Particle &particle, MatrixXf z, MatrixXf R)
{	
    int lenz = z.cols();
    MatrixXf xf(2,lenz);
    MatrixXf *Pf; 			
}