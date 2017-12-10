#include "Presentacion.h"


Presentacion::~Presentacion(){

}

 Presentacion::Presentacion()
{
        //TODO: borrar esto.
        fachada.setAutores();
        fachada.setLibros();
}

void Presentacion::menuPrincipal(int &opcion){
    std::cout << "1.  Registrar nuevo libro\n";
    std::cout << "2.  Listar libros registrados\n";
    std::cout << "3.  Detalles de un libro\n";
    std::cout << "4.  Registrar autor\n";
    std::cout << "5.  Listar autores registrados\n";
    std::cout << "6.  Monto recaudo\n";
    std::cout << "7.  Registrar venta\n";
    std::cout << "8.  Consultar cantidades vendidas\n";
    std::cout << "9.  Listar libro mas vendido\n";
    std::cout << "10. Consultar cantidad de autores\n";
    std::cout << "11. Salir del Presentacion.\n";
    std::cin >> opcion;
}

void Presentacion::subMenu(int &op) {
    std::cout << "1.  Novela\n";
    std::cout << "2.  Texto\n";
    std::cout << "3.  Texto escolar\n";
    std::cout << "4.  Salir\n";
    std::cin >> op;
}




void Presentacion::registrarAutor() {
    //Cedula
    long int cedula;
    std::cout << "Cedula: ";
    std::cin >> cedula;
    //Nombre
    std::cout << "Nombre: ";
    String nombre;
    nombre.scan();
    //Fecha Nac
    Fecha f;
    f.scan();
    Autor * autor = new Autor(cedula,nombre,f);
    fachada.registrarAutor(autor,error);
    //Falta validar autor.
    std::cout <<"Autor ingresado correctamente";autor->getNombre().print();
}

void Presentacion::registrarLibro(tipoLibro tipo){
    Libro * l;

    //ISBN
    long int isbn = 0;
    std::cout << "ISBN: ";
    std::cin >> isbn;

    if(!fachada.existeLibro(isbn)){
        //titulo
        std::cout << "Titulo: ";
        String titulo;
        titulo.scan();
        //Precio
        float precio = 0.0;
        std::cout << "Precio: ";
        std::cin >> precio;

        if (tipo == NOVELA){
            std::cout << "Genero: ";
            String genero;
            genero.scan();
            std::cout << "Ci Autor: ";
            long int ci;
            std::cin >> ci;

            bool existeAutor = fachada.existeAutor(ci);

            if(!existeAutor){
                imprimirError(NO_EXISTE_AUTOR);
            }else {
                Autor * autor = fachada.obtenerAutor(ci);
                l = new Novela(isbn, titulo, precio, 0, genero);
                ((Novela*)l)->setAutor(autor);

                fachada.registrarLibro(l, error);
            }
        } else {
            std::cout << "Fecha de publicacion: \n";
            Fecha fecha;
            fecha.scan();

            std::cout << "Materia: \n";
            String materia;
            materia.scan();

            if (tipo == ESCOLAR){
                int anio = 0;
                std::cout << "A�o de escuela: ";
                std::cin >> anio;

                l = new Escolar(isbn,titulo,precio,0,materia,fecha,anio);
            } else {
                l = new Texto(isbn,titulo,precio,0,materia,fecha);
            }

            fachada.registrarLibro(l, this->error);
        }

        if(this->error.hayError()){
            imprimirError(LIBRO_NO_REGISTRADO);
        }else{
            imprimirMensaje(LIBRO_REGISTRADO);
        }
    }else{
        imprimirError(LIBRO_YA_EXISTE);
    }
}

void Presentacion::listarLibroMasVendido(){
     std::cout << "El libro mas vendido es: ";
     Error e(false, SIN_ERROR);
     fachada.listarLibroMasVendido(e);
}

void Presentacion::consultarCantidadVendida(){
    int novelas = 0,textos = 0, escolares = 0;
    fachada.cantidadTotalVendida(novelas,textos,escolares);
    std::cout << "Novelas: " << novelas << "\n";
    std::cout << "Textos: " << textos << "\n";
    std::cout << "Textos escolares: " << escolares << "\n";
}

void Presentacion::registrarVenta(){
    long int isbn = 0;
    std::cout << "Ingrese ISBN: "; std::cin >> isbn;
    fachada.registrarVenta(isbn,error);
    //validar error;
}

void Presentacion::montoRecaudado(){
    float total = fachada.calcularMontoTotal();
    std::cout << "Total recaudado: "<<total<<"\n";
}

void Presentacion::listarAutores(){
    iteradorAutores iter;
    fachada.listarAutores(iter);
    if (iter.hayMasAutores()){
        while(iter.hayMasAutores()){
            Autor * autor = iter.proximoAutor();
            autor->toString().print();
        }
    } else {
        std::cout << "VAcio";
        error.setError(true);
        error.setNumeroError(DICCIONARIO_VACIO);
    }
}

void Presentacion::detalleLibro(){
    long int isbn = 0;
    String detalle;
    std::cout<< "Ingrese ISBN: "; std::cin >> isbn;
    fachada.listarLibro(isbn,detalle,error);
    if(error.hayError()){
         std::cout<< "hay error";
    } else {
        detalle.print();
    }
}

void Presentacion::listarLibros(){
    IteradorLibros iter;
    fachada.listarLibros(iter);
    if (iter.hayMasLibros()) {
       while(iter.hayMasLibros()){
            Libro * l = iter.proximoLibro();
            l->toString().print();
       }
    } else {
        //TODO: Falta errores.
    }
}

void Presentacion::consultarCantidadDeAutores(){
    Fecha fecha;
    std::cout << "Ingrese una fecha: ";
    fecha.scan();
    int resultado = fachada.cantidadAutoresPosterior(fecha);
    std::cout <<"\n" << "Los autores nacidos posterior a ";fecha.print();
    std::cout <<" son: " << resultado << "\n";
}


/**  Private  **/

//SIN_ERROR,NO_EXISTE_LIBRO,NO_EXISTE_AUTOR,DICCIONARIOVACIO
void Presentacion::imprimirError(TipoDeError codigo){
    switch(codigo){
        case SIN_ERROR:
            break;
        case NO_EXISTE_AUTOR:
            std::cout << "ERROR: autor no existe\n";
            break;
        case NO_EXISTE_LIBRO:
            std::cout << "ERROR: libro no existe\n";
            break;
        case DICCIONARIO_VACIO:
            std::cout << "ERROR: diccionario vacio\n";
            break;
        case LIBRO_YA_EXISTE:
            std::cout << "ERROR: libro ya existe\n";
            break;
        case AUTOR_YA_EXISTE:
            std::cout << "ERROR: autor ya existe\n";
            break;
        case LIBRO_NO_REGISTRADO:
            std::cout << "ERROR: libro no registrado\n";
            break;
    }
}

void Presentacion::imprimirMensaje(MensajeExito codigo){

    switch(codigo){
        case LIBRO_REGISTRADO: {
            std::cout << "Libro registrado exitosamente\n";
            break;
        }
        default:
            std::cout << "Mensaje desconocido\n";
    }
}





