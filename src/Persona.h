//
// Created by Tere Solano on 17/10/2020.
//

#ifndef MY_PROJECT_NAME_PERSONA_H
#define MY_PROJECT_NAME_PERSONA_H

#include <string>
#include <ostream>
#include <sstream>
using namespace std;

class Persona {
private:
    int id;
    int age;
    string name;

public:
    Persona();


    Persona(int id, int age, const string &name);

    int getId() const;

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    const string &getName() const;

    void setName(const string &name);

    string toString();

};


#endif //MY_PROJECT_NAME_PERSONA_H
