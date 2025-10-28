#include <gtest/gtest.h>
#include "../src/core/scheduler.hpp"
#include "../src/core/timetable.hpp"

TEST(SchedulerTest, TestScheduleCreation) {
    Scheduler scheduler;
    Timetable timetable = scheduler.createTimetable();
    EXPECT_TRUE(timetable.isValid());
}

TEST(SchedulerTest, TestAddCourse) {
    Scheduler scheduler;
    Course course("Math", 3);
    scheduler.addCourse(course);
    EXPECT_EQ(scheduler.getCourses().size(), 1);
}

TEST(TimetableTest, TestTimetableInitialization) {
    Timetable timetable;
    EXPECT_EQ(timetable.getSlots().size(), 0);
}

TEST(TimetableTest, TestAddSlot) {
    Timetable timetable;
    TimeSlot slot("Monday", "9:00", "10:00");
    timetable.addSlot(slot);
    EXPECT_EQ(timetable.getSlots().size(), 1);
}