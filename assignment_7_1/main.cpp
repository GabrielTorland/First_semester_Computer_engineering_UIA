#include <iostream>
#include <string>
int main() {
    std:: string string1;
    std:: string string2;
    std:: cout << "Type string 1: " << std::endl;
    std:: getline(std::cin, string1);
    std:: cout << "Type string 2: " << std::endl;
    std:: getline(std::cin, string2);

    if (string1 == string2)
        std:: cout << "The strings are equal" << std::endl;
    else std:: cout << "The strings are not equal" << std::endl;

    if(string1.find(string2) != std::string::npos){
        std:: cout << "Last string is substring of first string" << std::endl;
        return 0;
    }

    else if(string2.find(string1) != std::string::npos){
        std:: cout << "First string is substring of last string" << std::endl;
        return 0;
    }

    else std:: cout << "There are no substrings" << std::endl;

    return 0;
}
