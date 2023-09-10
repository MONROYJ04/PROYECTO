#include <iostream>
#include <Mascota.hpp>
#include <Tron.hpp>

int main(int argc, char const *argv[])
{
    std::cout << "Juego de Mascotas" << std::endl;

    Mascota m1("Firulais");

    m1.jugar();
    m1.jugar();
    m1.jugar();

    std::cout
        << m1.Decirnombre() << " tiene "
        << m1.Decirhambre() << " de hambre" << std::endl;

    m1.comer(5);

    std::cout << "Video Juego" << std::endl;
    Videojuego v1("Jugador 1");

    v1.ataca();
    v1.ataca();
    v1.ataca();

    std::cout
        << v1.Decirnombre() << " tiene "
        << v1.Decirvida() << " de vida" << std::endl;


    v1.atacan(4);

    return 0;

    v1.boton();
    v1.enemigo();
    v1.humano();
    v1.joystick();
    v1.jugador();
    v1.nivel();
    v1.perilla();
};