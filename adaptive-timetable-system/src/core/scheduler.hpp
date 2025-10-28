#ifndef SCHEDULER_HPP
#define SCHEDULER_HPP

#include <vector>
#include "timetable.hpp"

class Scheduler {
public:
    Scheduler();
    ~Scheduler();

    void scheduleClasses(const Timetable& timetable);
    void optimizeSchedule();
    void displaySchedule() const;

private:
    std::vector<Timetable> schedules;
};

#endif // SCHEDULER_HPP