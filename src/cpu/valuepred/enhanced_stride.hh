#ifndef __ENHANCED_STTIDE_HH__
#define __ENHANCED_STTIDE_HH__

#include "cpu/valuepred/valuepred_unit.hh"
#include "params/EStride.hh"

namespace gem5
{

namespace valuepred
{

class EStride: public VPUnit
{

  private:
    using Params = EStrideParams;

  public:
    EStride(const Params &params);
    virtual VPResult valuePredict(VPPredMetaData &pred_metadata) override;

    virtual void updateValuePredictor(VPUpdateMetaData &update_metadata) override;

    virtual void specUpdateValuePredictor(VPSpecUpdateMetaData &specupdate_metadata) override;

    virtual void squash(const uint64_t seq_no) override;
};

}

}


#endif
