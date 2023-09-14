#include <string>
#include <iostream>

class Videojuego
{

private:
    int vida;
    std::string nombre;

public:
    Videojuego(std::string nombre)
    {
        this->vida = 3;
        this->nombre = nombre;
    }

    ~Videojuego() {}

    void ataca()
    {
        this->vida += 3;
    }
    void atacan(int atacan)
    {
        this->vida -= atacan;
    }
    std::string Decirnombre()
    {
        return this->nombre;
    }
    int Decirvida()
    {
        return this->vida;
    }

    void jugador()
    {
        std::cout << "Puede:" << std::endl;
        std::cout << "Iniciar" << std::endl;
        std::cout << "Finalizar" << std::endl;
    }

    void enemigo()
    {
        std::cout << "Puede:" << std::endl;
        std::cout << "Bloquear" << std::endl;
        std::cout << "Acelerar" << std::endl;
    }

    void humano()
    {
        std::cout << "Puede:" << std::endl;
    }

    void vehiculo()
    {
        std::cout << "Puede:" << std::endl;
    }

    void nivel()
    {
        std::cout << "Puede:" << std::endl;
        std::cout << "Iniciar" << std::endl;
        std::cout << "Finalizar" << std::endl;
    }

    void joystick()
    {
        std::cout << "Arriba" << std::endl;
        std::cout << "Diagonal arriba derecha" << std::endl;
        std::cout << "Diagonal arriba izquierda" << std::endl;
        std::cout << "Abajo" << std::endl;
        std::cout << "Diagonal abajo derecha" << std::endl;
        std::cout << "Diagonal abajo derecha" << std::endl;
        std::cout << "Izquierda" << std::endl;
        std::cout << "Derecha" << std::endl;
    }

    void boton()
    {
        std::cout << "Realentizar" << std::endl;
    }

    void perilla()
    {
        std::cout << "Apuntar" << std::endl;
    }
};
