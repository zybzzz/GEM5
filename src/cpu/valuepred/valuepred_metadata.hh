#ifndef __VALUEPRED_METADATA_HH_
#define __VALUEPRED_METADATA_HH_

#include "enums/ValuePredType.hh"

namespace gem5
{

namespace valuepred
{

class VPPredMetaData
{

};

class VPUpdateMetaData
{

};

class VPSpecUpdateMetaData
{

};

class VPResult
{
  public:
    // is value prediction taken?
    bool speculative;
                // prediction value
                long value;
};

// This factory class constructs predictor-related data structures
// based on the type of predictor passed in.
class VPDataStructFactory
{
  public:
   static VPPredMetaData* buildPredMetaData(ValuePredType type);
   static VPUpdateMetaData* buildUpdateMetaData(ValuePredType type);
   static VPSpecUpdateMetaData* buildSpecUpdateMetaData(ValuePredType type);
};

}

}



#endif
