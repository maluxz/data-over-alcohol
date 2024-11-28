# Data Over Alcohol

Este repositorio contiene el código y la documentación para un proyecto de clase desarrollado para la materia de Física General, específicamente la Unidad V de Óptica, en el Instituto Tecnológico de Chihuahua II. El proyecto se enfoca en la comunicación entre dos microcontroladores ATMEGA328p utilizando una técnica de modulación digital. La comunicación se logra enviando los bits en forma de pulso de luz a través de un láser que emite pulsos a una manguera rellena con alcohol, que luego llega al otro microcontrolador y se decodifica la señal utilizando el código ASCII.

## Descripción del Proyecto

El objetivo de este proyecto es explorar los conceptos de óptica y modulación digital en el contexto de la física general. Para lograr esto, hemos implementado un sistema de comunicación que utiliza el alcohol como medio de transmisión. Aquí está una breve descripción de los componentes clave del proyecto:

- **Microcontroladores ATMEGA328p:** Utilizamos dos microcontroladores ATMEGA328p para la comunicación. Cada uno de ellos actúa como un emisor y un receptor de datos.

- **Láser:** Empleamos un láser como fuente de luz para enviar los pulsos de datos. La luz del láser se enfoca en una manguera llena de alcohol que actúa como medio de transmisión.

- **Manguera con Alcohol:** La manguera llena de alcohol es el medio a través del cual se transmiten los pulsos de luz. El alcohol se utiliza debido a su capacidad para transmitir la luz de manera efectiva.

- **LDR (Light Dependent Resistor):** En el extremo receptor, utilizamos un LDR para detectar los pulsos de luz. El LDR se encarga de convertir la luz en señales eléctricas que luego se decodifican.

- **Decodificación en Código ASCII:** Los pulsos de luz transmitidos representan datos en forma binaria. Utilizamos un algoritmo de decodificación para convertir estos datos en caracteres ASCII legibles.

- **Teclado matricial 4x4 y Pantalla LCD 2x16:** La entrada de letras por parte del humano se hace a través de un teclado matricial 4x4 mientras que la salida en el microcontrolador receptor se hace a través de una pantalla LCD 2x16.

## Instrucciones de Uso

Proporciono un enlace a un video de demostración del proyecto en funcionamiento. Puedes verlo en [este enlace de YouTube](https://youtu.be/5L_pAHBSYFc)

---

¡Gracias por visitar este repositorio! Espero que este proyecto sea de utilidad para comprender los conceptos de óptica y modulación digital en un contexto práctico de física general. Si tienes alguna pregunta o comentario, no dudes en contactar.
