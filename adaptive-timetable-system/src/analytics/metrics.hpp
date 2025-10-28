// metrics.hpp
#ifndef METRICS_HPP
#define METRICS_HPP

#include <vector>

class Metrics {
public:
    Metrics();
    void recordMetric(const std::string& metricName, double value);
    double getAverage(const std::string& metricName) const;
    std::vector<double> getAllMetrics(const std::string& metricName) const;

private:
    std::map<std::string, std::vector<double>> metricsData;
};

#endif // METRICS_HPP