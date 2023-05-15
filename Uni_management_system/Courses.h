#pragma once
#include<sstream>
#include <vector>
using namespace std;
class Course {


    public:
    string extract(vector<string>& Cs) {
    string s = "";
    for (string course : Cs) {
        s += (course + "_");
    }
    s = s.substr(0, s.length() - 1);
    return s;
    }
// oop,121,1,30,ds_math_fff,3,hananHindy
    string name;
    int code;
    bool required;
    int level;
    int max_students;
    vector<string> pre_req;
    short hours;
    string instructor;



    Course(string name, int code, bool req, int maxS, vector<string> pres, short hours, string inst, int level) {
        this->name = name;
        this->code = code;
        this->level = level;
        this->required = req;
        this->max_students = maxS;
        this->pre_req = pres;
        this->hours = hours;
        this->instructor = inst;
    }
    Course() {
        name = "";
        code = 0;
        required = false;
        max_students = 0;
        pre_req = vector<string>(0);
        hours = 0;
        instructor = "";
        level = 0;
    }

    string to_record() {
        string o = ",";
        stringstream SS;
        SS << this->name << o << this->code << o << this->required << o << this->max_students << o << this->extract(this->pre_req) << o << this->hours << o << this->instructor << o << this->level << "\n";
        return SS.str();
    }
};

