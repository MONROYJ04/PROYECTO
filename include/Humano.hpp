#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Humano : public Dibujo, public Actualizable
{
private:
public:
    Humano(/* args */) : Dibujo("moto")
    {
    }
    ~Humano() {}
    void Actualizar()
    {
    }
};