#include "data_associate_known.h"
#include <iostream>

//z is range and bearing of visible landmarks
void data_associate_known(vector<Vector2d> z, vector<int> idz, VectorXd &table, int Nf, \
		vector<Vector2d> &zf, vector<int> &idf, vector<Vector2d> &zn) 
{
	idf.clear();
	vector<int> idn;

	unsigned i,ii,r;

	for (i =0; i< idz.size(); i++){
		ii = idz[i];
		VectorXd z_i;
		if (table(ii) ==-1) { //new feature
			z_i = z[i];
			zn.push_back(z_i);
			idn.push_back(ii);				
		}
		else {
			z_i = z[i];
			zf.push_back(z_i);
			idf.push_back(table(ii));
		}	
	}

	assert(idn.size() == zn.size());
	for (int i=0; i<idn.size(); i++) {
		table(idn[i]) = Nf+i;  
	}
}

