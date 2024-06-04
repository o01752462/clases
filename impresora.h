#ifndef IMPRESORA_H
#define IMPRESORA_H
#include<iostream>
#include<string>
#include<exceptions>

using std::string;
using std::cout;
using std::endl;

class Impresora
{
    private:
    int numhojas;
    string nombre;

    public:
    Impresora(string nom, int numhojas);
    


};


#endif