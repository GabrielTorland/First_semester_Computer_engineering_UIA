#include <iostream>
#include <map>
#include <string>
using namespace std;
map<string, map<string, char>> Student;
int main() {
    string name;
    string course;
    char grade;


    while (true){
        cout << "Student: " << endl;
        getline(cin, name);
        if (name == "stop"){
            break;
        }
        while (true){
            cout << "Course: " << endl;
            getline(cin, course);
            if(course == "stop"){
                break;
            }
            cout << "Grade: " << endl;
            cin >> grade;
            getchar();
            Student[name][course] = grade;
        }
    }
    for (auto & candidate : Student){
        for ( auto & Cor_Gra : candidate.second){
            cout << candidate.first
            << " - " << Cor_Gra.first
            << " - " << Cor_Gra.second << endl;
        }
    }




    //map <int, string> student;
    //student[1] = "Gabriel";
    //student[2] = "Torland";
    //student.clear();
    //cout << "True equals 1, false equal 0. => " << student.empty() << endl;
    //cout << student[1] << endl;
    //map <int,string> :: iterator it;
    //for(it = student.begin(); it != student.end(); it++){
        //cout << "Student: " << it->second<< " Grade: " << it->first << endl;


    //}
    return 0;
}
