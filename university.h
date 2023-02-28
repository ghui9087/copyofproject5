#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "course.h"
#include "student.h"
#include <string>
#include <unordered_map>

using namespace std;

class University {
  friend class EnrollmentSystem;
  friend class Course;
  friend class Student;

private:
  string name;
  unordered_map<int, Student *> students;
  unordered_map<string, Course *> courses;
  
  bool addToCatalog(Course* course);
  bool addToStudentlist(Student* student);
  // Drop student from given course, return true if successful
  bool dropCourse(int studentID, const string &courseNumber);

  // Add student to the given course, return true if successful
  bool addCourse(int studentID, const string &courseNumber);

  // Return true if student is in the given course
  bool isInCourse(int studentID, const string &courseNumber) const;

  // Return the courses student is enrolled in
  // The returned courses are separated by commas and sorted by course name
  string getEnrolledCourses(int studentID) const;

  // Return the title for the course
  string getCourseTitle(const string &courseNumber);

  // Return class list sorted by last name of students
  string getClassListByLastName(const string &courseNumber) const;

  // Return class list sorted by id of students
  string getClassListByID(const string &courseNumber) const;


public: 
  explicit University(string name);
  //No need for copy constructor
  // explicit University(const University & otr);
  ~University();
};

#endif