//
// Created by Tere Solano on 17/10/2020.
//

#include "Persona.h"

Persona::Persona(int id, int age, const string &name) : id(id), age(age), name(name) {}

int Persona::getId() const {
    return id;
}

void Persona::setId(int id) {
    Persona::id = id;
}

int Persona::getAge() const {
    return age;
}

void Persona::setAge(int age) {
    Persona::age = age;
}

const string &Persona::getName() const {
    return name;
}

void Persona::setName(const string &name) {
    Persona::name = name;
}

string Persona::toString() const {
    stringstream s;

    s<< "\t id: " <<id<<endl;
    s<< "\t age: "<<age<<endl;
    s<< "\t name: "<<name<<endl;

    return s.str();
}

Persona::Persona() {}
