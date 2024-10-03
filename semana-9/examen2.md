# III Parte. Programación:

## Implementación de solución a un enunciado para un proyecto académico

Este proyecto abarca los temas de composición, herencia, polimorfismo, sobrecarga de métodos, sobrescritura de métodos y el uso de un contenedor de objetos abstractos en el lenguaje de programación C++.

### Enunciado del Proyecto: Sistema de Gestión de Zoológico

#### Descripción General:

Se te solicita diseñar e implementar un sistema en C++ para gestionar un zoológico. Este sistema debe modelar diferentes tipos de animales, su comportamiento, y las características de cada especie. Además, se debe gestionar información relacionada con los cuidadores asignados a cada animal, sus rutinas y alimentación. El sistema debe demostrar los siguientes conceptos de programación orientada a objetos:

- **Composición**: Relación entre los animales y su alimentación.
- **Herencia**: Diferentes tipos de animales (mamíferos, aves, reptiles) deben heredar de una clase base genérica `Animal`.
- **Polimorfismo**: Los animales deben comportarse de manera distinta según su tipo.
- **Sobrecarga de métodos**: La clase `Cuidador` debe tener diferentes versiones de un método `alimentar` que permita alimentar animales de diferentes tipos o varios a la vez.
- **Sobrescritura de métodos**: La clase `Animal` debe tener un método `hacerSonido`, que será sobreescrito por cada tipo de animal para producir su sonido característico.
- **Contenedor de objetos abstractos**: Debes utilizar un contenedor (por ejemplo, un vector) que almacene punteros a objetos de tipo `Animal` (clase base abstracta), permitiendo el uso del polimorfismo para interactuar con diferentes tipos de animales.

### Requerimientos Funcionales:

#### Clases:

- **`Animal` (Clase abstracta)**: La clase base para todos los animales. Debe tener atributos comunes como `nombre`, `edad` y `tipoDeAlimentacion`. También debe incluir métodos abstractos como `hacerSonido()` y `comer()`.
- **Subclases de `Animal`:**
  - **`Mamífero`, `Ave`, `Reptil`**: Cada una debe sobrescribir el método `hacerSonido()` con su propio sonido característico y el método `comer()`.
- **`Cuidador`**: Los cuidadores son responsables de alimentar a los animales. La clase debe incluir un método `alimentar()` sobrecargado para alimentar animales individuales o grupos de animales.

#### Composición:

Cada `Animal` debe tener una relación de composición con una clase `Alimentacion`, que gestione qué tipo de comida recibe cada animal, con atributos como `tipoDeComida`, `cantidadDiaria`, y `horarioDeAlimentacion`.

#### Herencia y Polimorfismo:

El sistema debe permitir gestionar animales de diferentes especies (mamíferos, aves y reptiles) utilizando punteros a objetos de la clase abstracta `Animal`. El comportamiento específico de cada animal (como su sonido y alimentación) debe resolverse en tiempo de ejecución mediante polimorfismo.

#### Sobrecarga y Sobrescritura de Métodos:

La clase `Cuidador` debe implementar una sobrecarga del método `alimentar()`, permitiendo alimentar a un solo animal o varios animales a la vez.  
Los métodos de la clase `Animal`, como `hacerSonido()` y `comer()`, deben ser sobrescritos en las clases derivadas para definir comportamientos específicos de cada tipo de animal.

#### Contenedor de Objetos Abstractos:

Utiliza un contenedor estándar de C++ (como `std::vector`) para almacenar punteros a los diferentes objetos `Animal` (mamíferos, aves, reptiles). A través de este contenedor, debes ser capaz de recorrer todos los animales y ejecutar sus métodos de forma polimórfica (por ejemplo, hacer que todos los animales hagan su sonido).

### Implementación:

1. **Diseña en UML** respetando las relaciones de herencia, composición y polimorfismo. (15 puntos)
2. **Implementa las clases** diseñadas respetando las relaciones de herencia, composición y polimorfismo. (20 puntos)
3. Utiliza **métodos virtuales** para implementar el polimorfismo. (6 puntos)
4. Implementa un **contenedor de punteros a objetos** de tipo `Animal` para gestionar un conjunto de animales de diferentes especies y acceder a sus métodos sobrescritos. (20 puntos)
5. **Sobrecarga métodos** en la clase `Cuidador` para permitir diferentes formas de alimentar a los animales.
6. **Entradas y Salidas (Main)**. (14 puntos)

   - **Entradas**: Información sobre los animales (nombre, tipo, edad, alimentación), cuidadores y rutinas de alimentación.
   - **Salidas**: Listado de animales, sonidos que emiten, alimentación de los animales, cuidadores que los alimentan.

#### Ejemplo de Ejecución:

El sistema debe poder crear diferentes tipos de animales, asignar cuidadores, alimentar a los animales, y hacer que todos los animales emitan sus sonidos.

### Entrega Final:

El proyecto debe incluir:

1. Código fuente en C++ que cumpla con los requisitos mencionados.
2. **Diagrama UML** que represente las clases, las relaciones de herencia y composición entre ellas, así como las interacciones entre los objetos. Este debe ser en formato imagen (img, png, jpeg, etc.).
3. Un archivo **README** explicando cómo compilar y ejecutar el programa, junto con una breve descripción del diseño y cómo se implementaron los conceptos solicitados.
