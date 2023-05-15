#pragma once
#include<vector>
#include<string>
#include<sstream>
#include<map>


using namespace std;
class Student
{
private:
    string extract(vector<string>& c) {
        string courses = "";
        for (string s : c) {
            courses += s + "_";
        }
        courses = courses.substr(0, courses.length() - 1);
        return courses;
    }

    string extract2(map<string,float>&v){
        string courses_Grades="";
        for(pair<string,float>j : v){
            string unit="";
            unit+=j.first;
            unit+=":";
            unit+=to_string(j.second);
            courses_Grades+=unit;
            courses_Grades+= "_";
        }
        courses_Grades = courses_Grades.substr(0, courses_Grades.length() - 1);
        return courses_Grades;

    }

    int calculateHours(int GPA){
        switch(GPA){
        case 0:
            return 10;
        case 1:
            return 12;
        case 2:
            return 15;
        case 3:
        case 4:
            return 18;
        }
    }

    pair<string,string> gen_em_pw(int ID){
        stringstream ss;
        pair<string, string> em_pw;
        ss << ID << "@cis.asu.edu.eg";
        em_pw.first = ss.str();
        ss.str("");
        ss << ID << "password";
        em_pw.second = ss.str();
        return em_pw;
    }

public:

    int ID;
    string name;
    string EMAIL;
    string password;
    int MaxHoursAllowed;
    vector<string> FinishedCourses;
    vector<string> InProgressCourses;
    int Level;
    float GPA;
    //
    map<string, float> CoursesGrades;


    float Set_Gpa(float gpa){
        this->GPA = gpa;
    }


    Student(int ID, string Name, string EMAIL, string password, int MaxHoursAllowed, vector<string> finishedC, vector<string> inProgressC, int level, float gpa) {
        this->ID = ID;
        this->name = Name;
        this->EMAIL = EMAIL;
        this->password = password;
        this->MaxHoursAllowed = MaxHoursAllowed;
        this->FinishedCourses = finishedC;
        this->InProgressCourses = inProgressC;
        this->Level = level;
        this->GPA = gpa;
    }

    Student(int ID, string name){
        this->name = name;
        this->ID = ID;
        this->Level = 1;
        this->GPA = 0;
        this->MaxHoursAllowed = 10;
        this->FinishedCourses = vector<string>();
        this->InProgressCourses = vector<string>();
        pair<string, string> em_pw = gen_em_pw(this->ID);
        this->EMAIL = em_pw.first;
        this->password = em_pw.second;
    }

    Student() {
        this->ID = -1;
        this->name = "";
        this->EMAIL = "";
        this->password = "";
        this->MaxHoursAllowed = -1;
        this->FinishedCourses = vector<string>();
        this->InProgressCourses = vector<string>();
        this->Level = -1;
        this->GPA = -1;
    }

    Student(int ID, string name, int level, double GPA, vector<string>fCourses){
        this->name = name;
        this->Level = level;
        this->GPA = GPA;
        this->FinishedCourses = fCourses;
        this->ID = ID;

        pair<string, string> em_pw = gen_em_pw(this->ID);
        this->EMAIL = em_pw.first;
        this->password = em_pw.second;
        this->MaxHoursAllowed = calculateHours(this->GPA);
    }



    void add_Grades_For_course(string name_course,float Grade){
        CoursesGrades[name_course]=Grade;
    }

    string Grades_to_record(){
        stringstream s;
        s<< ID <<","<< extract2(this->CoursesGrades)<<"\n";
        return s.str();
    }

    string to_record() {
        stringstream ss;
        string c = ",";
        ss << ID << c << name << c << EMAIL << c << password << c << MaxHoursAllowed << c << extract(this->FinishedCourses) << c << extract(this->InProgressCourses) << c << Level << c << GPA << "\n";
        return ss.str();
    }

    void changeMaxHours(){
        this->MaxHoursAllowed = calculateHours(this->GPA);
    }

};

