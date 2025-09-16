// Since filling out forms all day would be too cruel for our bureaucrats, interns exist to
// take on this tedious task. In this exercise, you must implement the Intern class. The
// intern has no name, no grade, and no unique characteristics. The only thing bureaucrats
// care about is that they do their job.
// However, the intern has one key ability: the makeForm() function. This function
// takes two strings as parameters: the first one represents the name of a form, and the
// second one represents the target of the form. It returns a pointer to a AForm object
// (corresponding to the form name passed as a parameter), with its target initialized to
// the second parameter.
// It should print something like:
// Intern creates <form>
// If the provided form name does not exist, print an explicit error message.

// You must avoid unreadable and messy solutions, such as using an excessive if/elseif/else structure.
// This kind of approach will not be accepted during the evaluation
// process. You’re not in the Piscine (pool) anymore. As usual, you must test everything
// to ensure it works as expected.
// For example, the following code creates a RobotomyRequestForm targeted at
// "Bender":

// {
// 	Intern someRandomIntern;
// 	AForm* rrf;
// 	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
// }
//-----------------------------------------------
// Dado que llenar formularios todo el día sería demasiado cruel para nuestros burócratas,
// los pasantes existen para asumir esta tediosa tarea.
// En este ejercicio, debes implementar la clase Intern. El
// El pasante no tiene nombre, grado ni características únicas. Lo único burócratas
// Lo que más nos importa es que hagan su trabajo.
// Sin embargo, el pasante tiene una habilidad clave: la función makeForm(). Esta función
// toma dos cadenas como parámetros: la primera representa el nombre de un formulario y la
// el segundo representa el objetivo del formulario. Devuelve un puntero a un objeto AForm
// (correspondiente al nombre del formulario pasado como parámetro), con su objetivo inicializado en
// el segundo parámetro.
// Debería imprimir algo como:
// El pasante crea <formulario>
// Si el nombre del formulario proporcionado no existe, imprima un mensaje de error explícito.

// Debe evitar soluciones ilegibles y desordenadas, como el uso de una estructura if/elseif/else excesiva.
// Este tipo de enfoque no será aceptado durante la evaluación.
// proceso. Ya no estás en la Piscine (piscina). Como siempre, debes probar todo.
// para garantizar que funcione como se esperaba.
// Por ejemplo, el siguiente código crea un RobotomyRequestForm dirigido a
// "Juerga":

// {
// 	Pasante algúnPasanteAleatorio;
// 	Forma A* rrf;
// 	rrf = someRandomIntern.makeForm("solicitud de robotectomía", "Bender");
// }


#pragma once
#include <iostream>
#include <string>
#include "Intern.hpp"
#include "AForm.hpp"

class Intern{
	public:
		Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);
		~Intern();
		AForm* makeForm(std::string const &formName, std::string const &target);
};
