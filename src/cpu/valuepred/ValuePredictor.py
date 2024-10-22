from m5.params import *
from m5.proxy import *
from m5.SimObject import *

class ValuePredType(ScopedEnum):
    # vals will contains value predictor type
    vals = ["EStride"]

class ValuePredictor(SimObject):
    type = "ValuePredictor"
    cxx_class = "gem5::valuepred::VPUnit"
    cxx_header = "cpu/valuepred/valuepred_unit.hh"
    abstract = True

class EStride(ValuePredictor):
    type = "EStride"
    cxx_class = "gem5::valuepred::EStride"
    cxx_header = "cpu/valuepred/enhanced_stride.hh"
    abstract = False


