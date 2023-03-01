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

private:
  // values
  set<int> students;
  string title;
  string ID;

public:
  explicit Course(string courseID, string title);

  // I do not thinking that copy construct is need for this
  // explicit Course(const Course &otr);
  ~Course();

  // Change the title of the course
  // Returns true if successful
  bool setTitle(string title);

  // returns title
  string getTitle();

  // returns the list of students,
  // organized alphabetically by last name
  // seperated by commas
  string getClassListByLastName() const;

  // returns the list of students,
  // organized numerically by studentID
  // seperated by commas
  string getClassListByID() const;
};

#endif