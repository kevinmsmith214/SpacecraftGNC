%module m4a75699c80e06fcf191faca4993581c1

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon.h"
%}

%trick_swig_class_typemap(CANNON, CANNON)



#ifndef CANNON_H
#define CANNON_H

%import(module="sim_services") "trick/regula_falsi.h"

typedef struct {
    double vel0[2] ;    

    double pos0[2] ;    

    double init_speed ; 

    double init_angle ; 


    double acc[2] ;     

    double vel[2] ;     

    double pos[2] ;     


    double time;        


    int impact ;        

    double impactTime;  

    REGULA_FALSI rf ;   
} CANNON;
#if SWIG_VERSION > 0x040000
%pythoncode %{
    if 'CANNON' in globals():
        CANNON.__setattr__ = _swig_setattr_nondynamic_instance_variable(object.__setattr__)
%}
#endif



#ifdef __cplusplus
extern "C"{
#endif
    int cannon_default_data(CANNON*);
    int cannon_init(CANNON*);
    int cannon_shutdown(CANNON*);
#ifdef __cplusplus
}
#endif

#endif
#ifdef TRICK_SWIG_DEFINED_CANNON
%trick_cast_as(CANNON, CANNON)
#endif
