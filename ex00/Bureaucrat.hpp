// Please note that exception classes do not have to be designed in
// Orthodox Canonical Form. However, every other class must follow it.

// Let’s design an artificial nightmare of offices, corridors, forms, and waiting queues.
// Sounds fun? No? Too bad.
// First, start with the smallest cog in this vast bureaucratic machine: the Bureaucrat.
// A Bureaucrat must have:
// • A constant name.
// • A grade that ranges from 1 (highest possible grade) to 150 (lowest possible grade).
// Any attempt to instantiate a Bureaucrat with an invalid grade must throw an exception:
// either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

// You will provide getters for both attributes: getName() and getGrade(). You must
// also implement two member functions to increment or decrement the bureaucrat’s grade.
// If the grade goes out of range, both functions must throw the same exceptions as the
// constructor.

// Remember, since grade 1 is the highest and 150 the lowest,
// incrementing a grade 3 should result in a grade 2 for the bureaucrat.

// The thrown exceptions must be catchable using try and catch blocks:
// try
// {
// 	/* do some stuff with bureaucrats */
// }
// catch (std::exception & e)
// {
// 	/* handle exception */
// }
// You must implement an overload of the insertion («) operator to print output in the
// following format (without the angle brackets):
// <name>, bureaucrat grade <grade>.
// As usual, submit some tests to prove that everything works as expected.

// ------
// Tenga en cuenta que las clases de excepción no tienen que diseñarse en
// Forma canónica ortodoxa. Sin embargo, todas las demás clases deben seguirlo.

// Diseñemos una pesadilla artificial de oficinas, pasillos, formularios y colas de espera.
// ¿Suena divertido? ¿No? Demasiado.
// Primero, comencemos con el engranaje más pequeño de esta enorme máquina burocrática: el burócrata.
// Un burócrata debe tener:
// • Un nombre constante.
// • Una calificación que oscila entre 1 (calificación más alta posible) y 150 (calificación más baja posible).
// Cualquier intento de crear una instancia de un burócrata con una calificación no válida debe generar una excepción:
// ya sea un Burócrata::GradeTooHighException o un Burócrata::GradeTooLowException.

// Proporcionará captadores para ambos atributos: getName() y getGrade(). Usted debe
// También implemente dos funciones de miembro para incrementar o disminuir el grado del burócrata.
// Si la calificación se sale del rango, ambas funciones deben generar las mismas excepciones que la
// constructor.

// Recuerde, dado que el grado 1 es el más alto y 150 el más bajo,
// incrementar una calificación 3 debería resultar en una calificación 2 para el burócrata.

// Las excepciones lanzadas deben poder detectarse mediante bloques try y catch:
// intentar
// {
// 	/* hago algunas cosas con burócratas */
// }
// captura (std::excepción & e)
// {
// 	/* manejar excepción */
// }
// Debe implementar una sobrecarga del operador de inserción («) para imprimir la salida en el
// siguiente formato (sin los corchetes angulares):
// <nombre>, grado burócrata <grado>.
// Como es habitual, envíe algunas pruebas para demostrar que todo funciona como se esperaba.



#pragma once
#include <iostream>
#include <string>

class Bureaucrat {
protected:
    std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

	const std::string& getName() const;
    int getGrade() const;
	void incrementGrade();
    void decrementGrade();
	class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);