// constraint.hpp
#ifndef CONSTRAINT_HPP
#define CONSTRAINT_HPP

#include <string>
#include <vector>

class Constraint {
public:
    virtual bool isSatisfied(const std::vector<int>& timetable) const = 0;
    virtual std::string getDescription() const = 0;
};

class TimeConstraint : public Constraint {
private:
    int timeSlot;
public:
    TimeConstraint(int slot);
    bool isSatisfied(const std::vector<int>& timetable) const override;
    std::string getDescription() const override;
};

class RoomConstraint : public Constraint {
private:
    int roomId;
public:
    RoomConstraint(int id);
    bool isSatisfied(const std::vector<int>& timetable) const override;
    std::string getDescription() const override;
};

#endif // CONSTRAINT_HPP