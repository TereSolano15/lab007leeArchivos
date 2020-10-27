//
// Created by Tere Solano on 8/10/2020.
//
#include <iostream>
#include <fstream>
#include "FileManager.h"
#include "Persona.h"
using namespace std;
int main() {

    vector<Persona> personListFromJson;

    cout << "\n\nDeserialización del Json" << endl;
    personListFromJson = FileManager::deserialize(R"([{"age":21,"id":117430751,"name":"Juan"},
{"age":44,"id":401256379,"name":"Chayanne"},{"age":72,"id":501369458,"name":"Rihanna"}])");

    for (const Persona& person: personListFromJson) {
        std::cout << person.toString() << std::endl;

    }
    cout<<"CANTIDAD DE PERSONAS EN LA LISTA"<<endl;
    cout<<personListFromJson.size();

    ifstream archivo1;
    string texto;
    
    try { archivo1.open("ArchivoJson.json", ios::binary); }
    catch (ifstream::failure a) {
        cout << "no se pudo abrir el archivo";
        exit(1);
    }
    cout << endl;
    while (!archivo1.eof()) {
        getline(archivo1, texto);
        cout << texto << endl;
    }
    archivo1.close();

    return 0;
}
