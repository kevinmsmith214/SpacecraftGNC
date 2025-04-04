#include <Python.h>
#if PY_VERSION_HEX >= 0x03000000
extern "C" {

PyObject * PyInit__mcabe675e74515b731adc79feb48b2ea2(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/S_source.hh */
PyObject * PyInit__m4a75699c80e06fcf191faca4993581c1(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon.h */
PyObject * PyInit__m5f04aca396244b53f12d99f6db5863bf(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon_numeric.h */
PyObject * PyInit__m289334139c407ab89a68dc14b889cdb4(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/optimization.h */
PyObject * PyInit__sim_services(void) ;
PyObject * PyInit__top(void) ;
PyObject * PyInit__swig_double(void) ;
PyObject * PyInit__swig_int(void) ;
PyObject * PyInit__swig_ref(void) ;

void init_swig_modules(void) {

    PyImport_AppendInittab("_m4a75699c80e06fcf191faca4993581c1", PyInit__m4a75699c80e06fcf191faca4993581c1) ;
    PyImport_AppendInittab("_m5f04aca396244b53f12d99f6db5863bf", PyInit__m5f04aca396244b53f12d99f6db5863bf) ;
    PyImport_AppendInittab("_m289334139c407ab89a68dc14b889cdb4", PyInit__m289334139c407ab89a68dc14b889cdb4) ;
    PyImport_AppendInittab("_mcabe675e74515b731adc79feb48b2ea2", PyInit__mcabe675e74515b731adc79feb48b2ea2) ;
    PyImport_AppendInittab("_sim_services", PyInit__sim_services) ;
    PyImport_AppendInittab("_top", PyInit__top) ;
    PyImport_AppendInittab("_swig_double", PyInit__swig_double) ;
    PyImport_AppendInittab("_swig_int", PyInit__swig_int) ;
    PyImport_AppendInittab("_swig_ref", PyInit__swig_ref) ;
    return ;
}

}
#else
extern "C" {

void init_mcabe675e74515b731adc79feb48b2ea2(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/S_source.hh */
void init_m4a75699c80e06fcf191faca4993581c1(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon.h */
void init_m5f04aca396244b53f12d99f6db5863bf(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon_numeric.h */
void init_m289334139c407ab89a68dc14b889cdb4(void) ; /* /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/optimization.h */
void init_sim_services(void) ;
void init_top(void) ;
void init_swig_double(void) ;
void init_swig_int(void) ;
void init_swig_ref(void) ;

void init_swig_modules(void) {

    init_m4a75699c80e06fcf191faca4993581c1() ;
    init_m5f04aca396244b53f12d99f6db5863bf() ;
    init_m289334139c407ab89a68dc14b889cdb4() ;
    init_mcabe675e74515b731adc79feb48b2ea2() ;
    init_sim_services() ;
    init_top() ;
    init_swig_double() ;
    init_swig_int() ;
    init_swig_ref() ;
    return ;
}

}
#endif
