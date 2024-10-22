from m5.params import *
from m5.proxy import *
from m5.SimObject import *

class ValuePredType(ScopedEnum):
    # vals will contains value predictor type
    vals = []

class ValuePredictor(SimObject):
    type = "ValuePredictor"
    cxx_class = "gem5::valuepred::VPUnit"
    cxx_header = "cpu/valuepred/valuepred_unit.hh"
    abstract = True

