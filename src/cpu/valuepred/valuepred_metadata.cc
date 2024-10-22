#include "cpu/valuepred/valuepred_metadata.hh"

#include <cassert>

namespace gem5
{

namespace valuepred
{

VPPredMetaData* VPDataStructFactory::buildPredMetaData(ValuePredType type)
{
  switch (type) {
    case ValuePredType::EStride:
      return nullptr;
    default: assert(0);
  }
}

VPUpdateMetaData* VPDataStructFactory::buildUpdateMetaData(ValuePredType type)
{
  switch (type) {
    case ValuePredType::EStride:
      return nullptr;
    default: assert(0);
  }
}

VPSpecUpdateMetaData* VPDataStructFactory::buildSpecUpdateMetaData(ValuePredType type)
{
  switch (type) {
    case ValuePredType::EStride:
      return nullptr;
    default: assert(0);
  }
}


}

}
