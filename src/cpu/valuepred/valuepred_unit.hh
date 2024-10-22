#ifndef __VALUEPRED_UNIT_HH__
#define __VALUEPRED_UNIT_HH__

#include "base/statistics.hh"
#include "cpu/valuepred/valuepred_metadata.hh"
#include "params/ValuePredictor.hh"
#include "sim/sim_object.hh"
#include "sim/stats.hh"

namespace gem5
{

namespace valuepred
{



class VPUnit : public SimObject
{
  private:
    using Params = ValuePredictorParams;

  public:
    VPUnit(const Params &params);
    // Do the value predict.
    virtual VPResult valuePredict(VPPredMetaData &pred_metadata) = 0;

    // In commit time, update value predictor
    virtual void updateValuePredictor(VPUpdateMetaData &update_metadata) = 0;

    // Some value predictor need speculative update to support back-to-back predict.
    virtual void specUpdateValuePredictor(VPSpecUpdateMetaData &specupdate_metadata) = 0;

    // If predict error, squash the inflight instructions in value predictor.
    virtual void squash(const uint64_t seq_no) = 0;

  public:
    struct ValuePredUnitStats : public statistics::Group
    {
        ValuePredUnitStats(VPUnit *vp);

        statistics::Scalar VPcorrected;
        statistics::Scalar VPpredicted;
        //Value prediction may result in unaligned memory accesses,
        //and we need to record this.
        statistics::Scalar faultLoad;
        statistics::Formula VPaccuracy;

    } stats;
};


}


}

#endif
