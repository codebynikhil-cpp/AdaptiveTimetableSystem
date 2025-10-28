#include <gtest/gtest.h>
#include "../src/models/course.hpp"
#include "../src/models/teacher.hpp"
#include "../src/models/room.hpp"

TEST(CourseTest, CreateCourse) {
    Course course("CS101", "Introduction to Computer Science", 3);
    EXPECT_EQ(course.getCode(), "CS101");
    EXPECT_EQ(course.getName(), "Introduction to Computer Science");
    EXPECT_EQ(course.getCredits(), 3);
}

TEST(TeacherTest, CreateTeacher) {
    Teacher teacher("John Doe", "jdoe@example.com");
    EXPECT_EQ(teacher.getName(), "John Doe");
    EXPECT_EQ(teacher.getEmail(), "jdoe@example.com");
}

TEST(RoomTest, CreateRoom) {
    Room room("Room 101", 30);
    EXPECT_EQ(room.getName(), "Room 101");
    EXPECT_EQ(room.getCapacity(), 30);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}