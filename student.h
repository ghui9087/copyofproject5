#ifndef STUDENT_H
#define STUDENT_H

#include <fstream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

// forward declaration
class Course;

class Student {
  friend class Course;
  friend class University;
  friend class EnrollmentSystem;
  friend ostream &operator<<(ostream &out, const Student &student);

private:
  set<string> courses;
  string name;
  int ID;
};

#endif