%module m5f04aca396244b53f12d99f6db5863bf

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon_numeric.h"
%}





#ifndef CANNON_NUMERIC_H
#define CANNON_NUMERIC_H

%import "build/home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon_py.i"

#ifdef __cplusplus
extern "C" {
#endif
int cannon_integ(CANNON*) ;
int cannon_deriv(CANNON*) ;
double cannon_impact(CANNON*) ;
#ifdef __cplusplus
}
#endif
#endif

