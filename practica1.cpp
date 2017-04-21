/******************************************************************************
Pr�cticas de c�lculo matricial de estructuras
https://github.com/ingmec-ual/practicas-calculo-matricial-estructuras

Copyright 2017 - Jose Luis Blanco Claraco <jlblanco@ual.es>
University of Almeria
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:
1. Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
notice, this list of conditions and the following disclaimer in the
documentation and/or other materials provided with the distribution.
3. Neither the name of the copyright holder nor the names of its
contributors may be used to endorse or promote products derived from
this software without specific prior written permission.
Complete BSD-3-clause License: https://opensource.org/licenses/BSD-3-Clause
******************************************************************************/

#include <Eigen/Dense>
#include "libcalculomatricial.h"
#include <iostream>

int main()
{
	using namespace Eigen;

	Eigen::MatrixXi A = Eigen::MatrixXi::Random(4, 4);
	Array3i ri(1, 2, 1);
	ArrayXi ci(6); ci << 3, 2, 1, 0, 0, 2;
	Eigen::MatrixXi B = indexing(A, ri, ci);
	std::cout << "A =" << std::endl;
	std::cout << A << std::endl << std::endl;
	std::cout << "A([" << ri.transpose() << "], [" << ci.transpose() << "]) =" << std::endl;
	std::cout << B << std::endl;

	return 0; // el programa finaliza sin errores
}
