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
};

#endif