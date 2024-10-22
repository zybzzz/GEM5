#include "cpu/valuepred/enhanced_stride.hh"

namespace gem5
{

namespace valuepred
{

EStride::EStride(const Params &params): VPUnit(params)
{

}

VPResult EStride::valuePredict(VPPredMetaData &pred_metadata)
{
  return VPResult();
}

void EStride::updateValuePredictor(VPUpdateMetaData &update_metadata)
{

}

void EStride::specUpdateValuePredictor(VPSpecUpdateMetaData &specupdate_metadata)
{

}

void EStride::squash(const uint64_t seq_no)
{

}

}

}
