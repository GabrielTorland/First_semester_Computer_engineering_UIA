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

    return 0;
}
