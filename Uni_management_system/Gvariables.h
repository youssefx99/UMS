#pragma once
#include<map>
#include<Student.h>
#include<Courses.h>
#include<vector>
#include<queue>
#include<QString>
#include<string>
#include <fstream>
#include <QMessageBox>
#include <algorithm>
using namespace std;

inline  map<int, Student> StudentData;
inline  map<string, Course> CoursesData;
inline int ID_generator = 2023170100;
inline queue<int> wasted_IDs;
inline Student *currentUser;

static void debugMsBox(string str);

static inline string toUtf8(const QString& s) {
    QByteArray sUtf8 = s.toUtf8();
    return std::string(sUtf8.constData(), sUtf8.size());
}


static inline bool  isSubsetOf(vector<string> preReq, vector<string> finished){
    for(int i =0 ; i < preReq.size(); i++){
        auto finder = find(finished.begin(), finished.end(), preReq[i]);
        if(finder == finished.end())
            return false;
    }
    return true;
}




static int count(std::string s, std::string del) {
    if(s == "")
        return -1;


    int counter = 0;

    for (char c : s) {
        if (c == del[0])
            counter++;
    }
    return counter;
}

static string* split(string s, string delimiter, int num_of_elemets) {

    stringstream ss(s); // create a stringstream object with the string
    string item;
    string* splitten_string = new string[num_of_elemets];   //
\
    string* ptr = splitten_string;
    while (std::getline(ss, item, delimiter[0])) { // loop through the stringstream object
        *ptr = item;// print each item
        ptr++;
    }
    return splitten_string;
}

static vector<string> strArrToVector(string* strArr, int size){
    vector<string> returned_vector;
    string* ptr = strArr;
    while(size --){
        returned_vector.push_back(*ptr);
        ptr++;
    }
    return returned_vector;
}

static string vectorToStrAr(vector<string> vc){
    string *ptr = &vc[0];
    return *ptr;
}


static QString strToQstr(string str){
    return QString::fromStdString(str);
}

// SAVE & LOAD
static void save_students(){

    fstream out("../Students.txt", ios::out);


    map<int,Student>::iterator it = StudentData.begin();
    while (it != StudentData.end())
    {
        string record = it->second.to_record();
        out << record;
        ++it;
    }


    out.close();
}

static void record_to_student(string& s, Student& unit) {
    //splitting the line into its components (components refers to the attributes of course)
    int num_of_elements_in_line = count(s, ",") + 1;    // 8
    string* elements = split(s, ",", num_of_elements_in_line);

    // splitting the pre requisits into multiple strings
    int num_of_finished_courses = count(elements[5], "_") + 1;
    string* finished_courses = split(elements[5], "_", num_of_finished_courses);

    int num_of_inprog_courses = count(elements[6], "_") + 1;
    string* inprogcourses = split(elements[6], "_", num_of_inprog_courses);
    //

    //
    vector<string> finished_c;
    for (int i = 0; i < num_of_finished_courses; i++)
        finished_c.push_back(finished_courses[i]);

    vector<string> inprog_c;
    for (int i = 0; i < num_of_inprog_courses; i++)
        inprog_c.push_back(inprogcourses[i]);

    // assiging each produced substring to the unit's attributes

    unit.ID = stoi(elements[0]);
    unit.name = elements[1];
    unit.EMAIL = elements[2];
    unit.password = elements[3];
    unit.MaxHoursAllowed = stoi(elements[4]);
    unit.FinishedCourses = finished_c;
    unit.InProgressCourses = inprog_c;
    unit.Level = stoi(elements[7]);
    unit.GPA = stof(elements[8]);

    delete[] elements;
    delete[] finished_courses;
    delete[] inprogcourses;
}

static void load_students() {
    fstream read("C:/Users/youss/OneDrive/Desktop/UMS/Students.txt", ios::in);
    string record;
    Student unit;
    while (getline(read, record)) {
        record_to_student(record, unit);
        StudentData[unit.ID] = unit;
    }
}

static void save_WID(){
    int size = wasted_IDs.size();
    fstream out("../WastedIDs.txt", ios::out);
    while(size--){
        string ID = to_string(wasted_IDs.front());
        ID+="\n";
        out << ID;
        wasted_IDs.pop();
    }
}

static void load_WID(){
    fstream in("../WastedIDs.txt", ios::in);
    string ID;
    while(getline(in, ID)){
        wasted_IDs.push(stoi(ID));
    }
    in.close();
}


static void save_courses() {

    fstream out("../Courses.txt", ios::out);
    map<string,Course>::iterator it = CoursesData.begin();
    while (it != CoursesData.end())
    {
        string record = it->second.to_record();
        out << record;
        ++it;
    }
    out.close();
}

static void record_to_course(string& s, Course& unit) {
    //splitting the line into its components (components refers to the attributes of course)
    int num_of_elements_in_line = count(s, ",") + 1;
    string* elements = split(s, ",", num_of_elements_in_line);

    // splitting the pre requisits into multiple strings
    int num_of_preCourses = count(elements[4], "_") + 1;
    string* pre_courses = split(elements[4], "_", num_of_preCourses);

    vector<string> pre_reqs;
    for (int i = 0; i < num_of_preCourses; i++)
        pre_reqs.push_back(pre_courses[i]);

    // assiging each produced substring to the unit's attributes

    unit.name = elements[0];
    unit.code = stoi(elements[1]);
    unit.required = elements[2] == "1" ? true : false;
    unit.max_students = stoi(elements[3]);
    unit.pre_req = pre_reqs;
    unit.hours = stoi(elements[5]);
    unit.instructor = elements[6];
    unit.level = stoi(elements[7]);

    delete[] elements;
    delete[] pre_courses;
}


static void load_courses() {
    fstream inout("../Courses.txt", ios::in);
    string line;

    Course unit;

    while (getline(inout, line)) {

        // taking each line in the text file and converting it into a course object using the line_to_course function
        record_to_course(line, unit);
        // after having a course unit out of a record, we push it into a map
        CoursesData[unit.name] = unit;
    }
}


static void debugMsBox(string str){
    QMessageBox msgBox;
    msgBox.setWindowTitle("Message");
    msgBox.setInformativeText(strToQstr(str));
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

static void Save_Student_Grades(){
    fstream out("../Students_Grades.txt", ios::out);
    map<int,Student>::iterator it = StudentData.begin();
    string record;
    while (it != StudentData.end())
    {
        if(!it->second.CoursesGrades.empty()){
            record = it->second.Grades_to_record();
            out << record;
        }
        ++it;
    }
    out.close();

}


static void load_Student_Grades() {
    fstream inout("C:/Users/youss/OneDrive/Desktop/UMS/Students_Grades.txt", ios::in);
    string line;

    while (getline(inout, line)) {

        string* record=NULL;
        record=split(line,",", 2);
        int id=stoi(record[0]);
        int count_courses=count(record[1], "_")+1;

        string* Courses_pairs=split(record[1],"_",count_courses);

        for(int i=0;i<count_courses;i++){
            string* course_data=split(Courses_pairs[i],":", 2);
            StudentData[id].CoursesGrades.insert(make_pair(course_data[0],stod(course_data[1])));
            delete[] course_data;
        }

        delete[] Courses_pairs;
        delete[] record;

    }

}

static void save_data(){
    save_courses();
    save_students();
    save_WID();
    Save_Student_Grades();
}

static void load_data(){
    load_courses();
    load_students();
    load_WID();
    if(StudentData.size()>0){
       load_Student_Grades();
    }
}

