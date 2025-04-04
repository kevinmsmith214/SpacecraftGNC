%module m289334139c407ab89a68dc14b889cdb4

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/optimization.h"
%}





#ifndef OPTIMIZATION_H
#define OPTIMIZATION_H

%import "build/home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon_py.i"

#ifdef __cplusplus
extern "C" {
#endif

int cannon_slave_post(CANNON *);
int cannon_master_post(CANNON *);

#ifdef __cplusplus
}
#endif
#endif
