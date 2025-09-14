// Now that you have basic forms, it’s time to create a few more that actually do something.
// In all cases, the base class Form must be an abstract class and should therefore be
// renamed AForm. Keep in mind that the form’s attributes need to remain private and
// that they belong to the base class.
// Add the following concrete classes:
// • ShrubberyCreationForm: Required grades: sign 145, exec 137
// Creates a file <target>_shrubbery in the working directory and writes ASCII trees
// inside it.
// • RobotomyRequestForm: Required grades: sign 72, exec 45
// Makes some drilling noises, then informs that <target> has been robotomized
// successfully 50% of the time. Otherwise, it informs that the robotomy failed.
// • PresidentialPardonForm: Required grades: sign 25, exec 5
// Informs that <target> has been pardoned by Zaphod Beeblebrox.
// All of them take only one parameter in their constructor: the target of the form. For
// example, "home" if you want to plant shrubbery at home.

// Now, add the execute(Bureaucrat const & executor) const member function to
// the base form and implement a function to execute the form’s action in the concrete
// classes. You must check that the form is signed and that the grade of the bureaucrat attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
// Whether you check the requirements in every concrete class or in the base class (and
// then call another function to execute the form) is up to you. However, one way is more
// elegant than the other.
// Lastly, add the executeForm(AForm const & form) const member function to the
// Bureaucrat class. It must attempt to execute the form. If successful, print something like:
// <bureaucrat> executed <form>
// If not, print an explicit error message.
// Implement and submit some tests to ensure everything works as expected.

//-------------------------
// Ahora que tiene formularios básicos, es hora de crear algunos más que realmente hagan algo.
// En todos los casos, la clase base Form debe ser una clase abstracta y, por lo tanto, debe ser
// renombrado AForm. Tenga en cuenta que los atributos del formulario deben permanecer privados y
// que pertenecen a la clase base.
// Agregue las siguientes clases concretas:
// • ShrubberyCreationForm: calificaciones requeridas: signo 145, ejecutivo 137
// Crea un archivo <destino>_shrubbery en el directorio de trabajo y escribe árboles ASCII
// dentro de él.
// • RobotomyRequestForm: calificaciones requeridas: signo 72, ejecutivo 45
// Hace algunos ruidos de perforación y luego informa que <objetivo> ha sido robotizado.
// con éxito el 50% de las veces. En caso contrario informa que la robotomía falló.
// • Formulario de perdón presidencial: calificaciones requeridas: signo 25, ejecutivo 5
// Informa que <objetivo> ha sido indultado por Zaphod Beeblebrox.
// Todos ellos toman sólo un parámetro en su constructor: el destino del formulario. Para
// Por ejemplo, "casa" si desea plantar arbustos en casa.

// Ahora, agregue la función miembro constante ejecutar (Bureaucrat const & executor) a
// el formulario base e implementar una función para ejecutar la acción del formulario en el concreto
// clases. Debe verificar que el formulario esté firmado y que la calificación del burócrata que intenta ejecutar el formulario sea lo suficientemente alta. De lo contrario, lanza una excepción apropiada.
// Ya sea que verifique los requisitos en cada clase concreta o en la clase base (y
// luego llame a otra función para ejecutar el formulario) depende de usted. Sin embargo, una forma es más
// elegante que el otro.
// Por último, agregue la función miembro constante ejecutarForm(AForm const & form) al
// Clase burócrata. Debe intentar ejecutar el formulario. Si tiene éxito, imprima algo como:
// <burócrata> ejecutó <formulario>
// De lo contrario, imprima un mensaje de error explícito.
// Implemente y envíe algunas pruebas para garantizar que todo funcione como se esperaba.

// #pragma once
// #include <iostream>
// #include <string>
// #include "AForm.hpp"

// class PresidentialPardonForm : public AForm {
// public:
//     PresidentialPardonForm();
//     PresidentialPardonForm(const std::string& name, int grade);
//     PresidentialPardonForm(const PresidentialPardonForm& other);
//     PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
//     ~PresidentialPardonForm();

// };
// std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& s);
