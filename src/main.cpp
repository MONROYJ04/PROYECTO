#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Actualizable.hpp>
#include <Controlador.hpp>
#include <Humano.hpp>

using namespace std;

int main(int argc, char const *argv[])
{

    Ventana v;

    Dibujo d1(5, 5, "moto derecha");
    Dibujo d2(10, 30, "");

    bool ejecucion = true;
    while (ejecucion)
    {

        v.Actualizar();
        if (getch() == 's')
        {
            ejecucion = false;
        }
        if (getch() == 'd')
        {
            d1.Avanzarx(1);
        }
        if (getch() == 'a')
        {
            d1.Retrocederx(1);
        }
        clear();
        d1.Dibujar();
        d2.Dibujar();
        v.Dibujar();
        refresh();
        usleep(41000);
    }

    return 0;
}

