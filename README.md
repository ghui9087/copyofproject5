# 2023win342d-p5-catislovetoyouwithno99
2023win342d-p5-catislovetoyouwithno99 created by GitHub Classroom
<p>
  <h1>Project 5: Enrollment System</h1><bk>
  Created by Houming Ge and Trenton Allison for Project 5
</p><p>
  ghui9087 and catislovetoyouwithno99 both is Houming Ge
</p>


<hr><h2>
  This is place for planning will be delete once we are ready to upload
</h2><p>
  I will not delete the old just in case we want looking them back but I will adding the line to separate
</p><hr>
<p><h3>
  Update structure to:
  </h3><bk></p><p><h3>
  University class: 
  </h3><li>
    One content the map<"Pointer Course Object, vector<pointer student object>">
  </li><li>
    A String that storged the University name
  </li><bk></p>
<p><h3>
  Course class:
  </h3><li>
    One integer for Course Number
  </li><li>
    One String for Course Information
  </li><bk></p>
<p>
  <h3>
   Student Class:
  </h3><li>
    One integer for student ID
  </li><li>
    One String for Student Name
  </li>
  <bk>
</p>
  <hr>
</p><p><bk>
  So I am thinking that we can have structure like this
<bk></p><p><h3>
  University class: 
  </h3><li>
    Has two Unorder_map
  </li><li>
    One content the map<"Course number, Pointer Course object">
  </li><li>
    One is student map<"Student ID(int), Pointer Student object">
  </li><li>
    A String that storged the University name
  </li><bk></p>
<p><h3>
  Course class:
  </h3><li>
    Has one Order_map
  </li><li>
    One integer for Course Number
  </li><li>
    One String for Course Information
  </li><li>
    Map will be like map<"Student ID(int), Pointer Student object">
  </li><bk></p>
<p>
  <h3>
   Student Class:
  </h3><li>
    Has one order map that content map<"Course number, Pointer Course object">
  </li><li>
    One integer for student ID
  </li><li>
    One String for Student Name
  </li>
  <bk>
</p>
