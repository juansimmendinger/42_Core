# 📝 Creating your own Printf() function

## Description

Este proyecto consiste en replicar el funcionamiento de la función original de printf. 
Se deben implementar las siguientes conversiones:

| Conversion  | Description													 			|
|-------|-----------------------------------------------------------------------------------|
| **%c** | Imprime un solo carácter.       													|
| **%s** | Imprime una string (como se define por defecto en C).											|
| **%p** | El puntero void * dado como argumento se imprime en formato hexadecimal.								|
| **%d** | Imprime un número decimal (base 10).																	|
| **%i** | Imprime un entero en base 10.               											|
| **%u** | Imprime un número decimal (base 10) sin signo.               									|
| **%x** | Imprime un número hexadecimal (base 16) en minúsculas.                				|
| **%X** | Imprime un número hexadecimal (base 16) en mayúsculas.                				|
| **%%** | Imprime el símbolo del porcentaje.                 											|

◦ La función printf retorna el número de caracteres impresos, o un valor negativo si ocurre un error.

◦ No se debe implementar la gestión del buffer del original.

Prototipo de la función:

int ft_printf(char const *s, ...);


## Use Example

<b>Code: </b>

![B030DA8C-43A1-48E6-A658-AE30472548C0](https://user-images.githubusercontent.com/66915274/198844199-3761987c-df3d-4c3d-90d1-e9f30583b83a.jpeg)

<b>Output: </b>

<img width="538" alt="Screen Shot 2022-10-29 at 6 54 40 PM" src="https://user-images.githubusercontent.com/66915274/198843655-23c772e4-1465-458b-9642-019bc62456dc.png">

## Authorized Functions 

| Función  | Descripción														 			|
|-------|-----------------------------------------------------------------------------------|
| malloc | Solicitar un bloque de memoria del tamaño suministrado como parámetro.     													|
| free | Desasigna un bloque de memoria que se había asignado previamente mediante una llamada. 											|
| write | Hace que los bytes que indiques del buffer sean escritos en el file descriptor seleccionado.								|
| va_start | Permite el acceso a los argumentos de la función variada.														|
| va_arg | Accede al siguiente argumento de la función variada.               											|
| va_copy | Hace una copia de los argumentos de la función variádica.               									|
| va_end | Finaliza el recorrido de los argumentos de la función variada.                				|

# Contact 📥

◦ Email: jsimmend@student.42wolfsburg.com

◦ Linkedin: https://www.linkedin.com/in/juan-simmendinger-b78874101/

### - 42 Core Progression ↙️

[HERE](https://github.com/juansimmendinger/42_Core)

### - Mi perfil en la intranet de 42 ↙️
[HERE](https://profile.intra.42.fr/users/jsimmend)
