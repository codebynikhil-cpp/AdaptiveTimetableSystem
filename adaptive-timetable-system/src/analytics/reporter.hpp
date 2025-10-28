// reporter.hpp
#ifndef REPORTER_HPP
#define REPORTER_HPP

#include <string>
#include <vector>

class Reporter {
public:
    Reporter();
    void generateReport(const std::string& reportType, const std::vector<std::string>& data);
    void saveReport(const std::string& filePath);
};

#endif // REPORTER_HPP