#include "cpu/valuepred/valuepred_unit.hh"

#include "base/logging.hh"
#include "base/stats/group.hh"
#include "base/stats/units.hh"

namespace gem5
{

namespace valuepred
{

VPUnit::VPUnit(const Params &params)
    : SimObject(params), stats(this)
{
}





VPUnit::ValuePredUnitStats::ValuePredUnitStats(VPUnit *vp)
    : statistics::Group(vp),
      ADD_STAT(VPcorrected, statistics::units::Count::get(), "number of correct vp"),
      ADD_STAT(VPpredicted, statistics::units::Count::get(), "number of predicted vp"),
      ADD_STAT(faultLoad, statistics::units::Count::get(), "fault counts"),
      ADD_STAT(VPaccuracy, statistics::units::Ratio::get(), "the accuracy of value predictor",
                      VPcorrected / VPpredicted)
{
}


}

}
