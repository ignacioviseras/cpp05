
#pragma once
#include <iostream>
#include <string>

class Bureaucrat;
class Form {
private:
    std::string _name;
    bool _signed;
    const int _gradeToSign;
    const int _gradeToExecute;
public:
    Form();
    Form(const std::string& name, int gradeToSign, int gradeToExecute);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();

	const std::string& getName() const;
    bool isSigned() const;
	int getGradeToSing() const;
    int getGradeToExecute() const;

    void beSigned(const Bureaucrat& b);
	class GradeTooHighException : public std::exception {
        public:
            const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            const char* what() const throw();
    };
};
std::ostream& operator<<(std::ostream& os, const Form& f);

// Now that you have bureaucrats, let’s give them something to do. What better activity
// could there be than filling out a stack of forms?
// Let’s create a Form class. It has:
// • A constant name.
// • A boolean indicating whether it is signed (at construction, it is not).
// • A constant grade required to sign it.
// • A constant grade required to execute it.
// All these attributes are private, not protected.
// The grades of the Form follow the same rules as those of the Bureaucrat. Thus, the
// following exceptions will be thrown if a form’s grade is out of bounds:
// Form::GradeTooHighException and Form::GradeTooLowException.
// As before, write getters for all attributes and overload the insertion («) operator to
// print all the form’s information.

// Also, add a beSigned() member function to the Form that takes a Bureaucrat as a
// parameter. It changes the form’s status to signed if the bureaucrat’s grade is high enough
// (greater than or equal to the required one). Remember, grade 1 is higher than grade 2.
// If the grade is too low, throw a Form::GradeTooLowException.
// Then, modify the signForm() member function in the Bureaucrat class. This function must call Form::beSigned() to attempt to sign the form. If the form is signed
// successfully, it will print something like:
// <bureaucrat> signed <form>
// Otherwise, it will print something like:
// <bureaucrat> couldn’t sign <form> because <reason>.
// Implement and submit some tests to ensure everything works as expected.
// // ----------------------

// Ahora que tenemos burócratas, démosles algo que hacer. Que mejor actividad
// ¿Podría haber algo más que llenar una pila de formularios?
// Creemos una clase de formulario. Tiene:
// • Un nombre constante.
// • Un booleano que indica si está firmado (en construcción, no lo está).
// • Se requiere una nota constante para firmarlo.
// • Se requiere una nota constante para ejecutarlo.
// Todos estos atributos son privados, no protegidos.
// Las calificaciones del Formulario siguen las mismas reglas que las del Burócrata. Así, el
// Se lanzarán las siguientes excepciones si la calificación de un formulario está fuera de los límites:
// Formulario::GradeTooHighException y Formulario::GradeTooLowException.
// Como antes, escriba captadores para todos los atributos y sobrecargue el operador de inserción («) para
// Imprima toda la información del formulario.

// Además, agregue una función miembro beSigned() al formulario que toma un burócrata como
// parámetro. Cambia el estado del formulario a firmado si la calificación del burócrata es lo suficientemente alta.
// (mayor o igual al requerido). Recuerde, el grado 1 es superior al grado 2.
// Si la calificación es demasiado baja, lanza una excepción Form::GradeTooLowException.
// Luego, modifique la función miembro signForm() en la clase Burócrata. Esta función debe llamar a Form::beSigned() para intentar firmar el formulario. Si el formulario está firmado
// con éxito, imprimirá algo como:
// <burócrata> firmó <formulario>
// De lo contrario, imprimirá algo como:
// <burócrata> no pudo firmar <formulario> porque <motivo>.
// Implemente y envíe algunas pruebas para garantizar que todo funcione como se esperaba.