#ifndef COURSE_H
#define COURSE_H

#include <fstream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// forward declaration
class Student;

class Course {
  friend class Student;
  friend class University;
  friend class EnrollmentSystem;
  friend ostream &operator<<(ostream &out, const Course &course);

public:
//I do not thinking that copy construct is need for this 
  explicit Course(int courseID);
  //explicit Course(const Course &otr);
  ~Course();

  int getCourseID();
  bool setDescrip(string descripition);
  string getDescrip();

private:
  set<int> students;
  string description;
  int ID;
};

#endif