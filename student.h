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
  //Do we need friend to all class(.h) at all class(.h)?
  friend class Course;
  friend class University;
  friend class EnrollmentSystem;
  friend ostream &operator<<(ostream &out, const Student &student);

public:
  explicit Student(int studentID, string studentName);
  //explicit Student(const Student & otr);
  ~Student();

  int     getStudentID();
  string  getStudentName();

private:
  set<string> courses;
  string name;
  int ID;
};

#endif