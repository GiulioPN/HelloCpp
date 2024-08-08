#include <algorithm>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/stats.hpp>

#include "Statistics/DescriptiveStatistics.hpp"

namespace statistics {

namespace ba = boost::accumulators;

double computeMean(const std::vector<double>& values) {
  ba::accumulator_set<double, ba::stats<ba::tag::mean>> acc;

  std::for_each(std::begin(values), std::end(values), std::ref(acc));

  return ba::mean(acc);
}

}  // namespace statistics