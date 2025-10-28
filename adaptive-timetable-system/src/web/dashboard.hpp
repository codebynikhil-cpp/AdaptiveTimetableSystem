// dashboard.hpp
#ifndef DASHBOARD_HPP
#define DASHBOARD_HPP

#include <string>

class Dashboard {
public:
    Dashboard();
    void displayTimetable(const std::string& timetableData);
    void showAnalytics(const std::string& analyticsData);
    void updateDashboard();

private:
    void render();
};

#endif // DASHBOARD_HPP