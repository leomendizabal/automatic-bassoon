#ifndef LIBROS_H
#define LIBROS_H
#include "libro.h"
#include "iteradorLibros.h"

const int TAM = 100;

class Libros{
    public:

        /** constructors and destructor */
        Libros();
        virtual ~Libros();

        /** dictionary default methods */
        // indica si el libro con el isbn ingresado es miembro de la colección
        bool member(int);
        // inserta el nuevo libro a la colección
        // precondición: el libro no es miembro de la colección
        void insert(Libro *);
        // retorna el libro cuyo isbn es el ingresado
        //precondición: el libro es miembro de la colección
        Libro * find(int);

        bool esVacio();

        void listarLibroMasVendido();

        IteradorLibros listarLibros();

    private:

        struct Nodo{
             Libro * info;
             Nodo * sig;
        };
        Nodo * hash[TAM];

        // función de dispersión
        int h(int);
        // crea una lista vacía
        void crearLista(Nodo * &);
        // destruye todo el contenido de la lista
        void destruirLista(Nodo * &);
        // indica si existe un libro con el isbn ingresado
        bool perteneceLista(Nodo *, int);
        // inserta el libro al principio de la lista
        void insFrontEnLista(Nodo * &, Libro *);
        // obtiene el libro con el isbn ingresado
        Libro * obtenerEnLista (Nodo *, int);
};

#endif // LIBROS_H
