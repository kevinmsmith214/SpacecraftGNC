from pkgutil import extend_path
__path__ = extend_path(__path__, __name__)
import sys
import os
sys.path.append(os.getcwd() + "/trick.zip/trick")

import _sim_services
from sim_services import *

# create "all_cvars" to hold all global/static vars
all_cvars = new_cvar_list()
combine_cvars(all_cvars, cvar)
cvar = None

# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/S_source.hh
import _mcabe675e74515b731adc79feb48b2ea2
combine_cvars(all_cvars, cvar)
cvar = None

# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon.h
import _m4a75699c80e06fcf191faca4993581c1
combine_cvars(all_cvars, cvar)
cvar = None

# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon_numeric.h
import _m5f04aca396244b53f12d99f6db5863bf
combine_cvars(all_cvars, cvar)
cvar = None

# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/optimization.h
import _m289334139c407ab89a68dc14b889cdb4
combine_cvars(all_cvars, cvar)
cvar = None

# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/S_source.hh
from mcabe675e74515b731adc79feb48b2ea2 import *
# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon.h
from m4a75699c80e06fcf191faca4993581c1 import *
# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/cannon_numeric.h
from m5f04aca396244b53f12d99f6db5863bf import *
# /home/kevin/SpacecraftGNC/trickPractice/SIM_cannon_numeric/models/cannon/include/optimization.h
from m289334139c407ab89a68dc14b889cdb4 import *

# S_source.hh
import _mcabe675e74515b731adc79feb48b2ea2
from mcabe675e74515b731adc79feb48b2ea2 import *

import _top
import top

import _swig_double
import swig_double

import _swig_int
import swig_int

import _swig_ref
import swig_ref

from shortcuts import *

from exception import *

cvar = all_cvars

