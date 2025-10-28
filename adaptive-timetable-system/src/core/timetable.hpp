#ifndef TIMETABLE_HPP
#define TIMETABLE_HPP

#include <vector>
#include "Course.hpp"
#include "Room.hpp"
#include "Teacher.hpp"

class Timetable {
public:
    Timetable();
    void addCourse(const Course& course);
    void assignRoom(const Course& course, const Room& room);
    void assignTeacher(const Course& course, const Teacher& teacher);
    void generateTimetable();
    void displayTimetable() const;

private:
    std::vector<Course> courses;
    std::vector<Room> rooms;
    std::vector<Teacher> teachers;
};

#endif // TIMETABLE_HPP