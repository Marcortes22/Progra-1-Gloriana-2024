# Herencia en C++

## Introducción

La **herencia** es uno de los pilares de la programación orientada a objetos (OOP). Permite crear nuevas clases (derivadas o subclases) basadas en clases existentes (bases o superclases). La clase derivada hereda atributos y métodos de la clase base, lo que facilita la reutilización de código y la creación de jerarquías de clases.

## Ventajas de la Herencia

- **Reutilización de Código:** Permite que las clases derivadas reutilicen código de las clases base.

- **Mantenibilidad:** Facilita la actualización de código compartido entre múltiples clases.

- **Modularidad:** Ayuda a estructurar el código de manera más lógica y jerárquica.

- **Polimorfismo:** Permite que las clases derivadas sean tratadas como si fueran de la clase base.

## Sintaxis Básica

```cpp

class Base {

public:

int atributo;

void metodo()  {

std::cout <<  "Método de la clase base\n";

}

};



class Derivada :  public Base {

public:

void metodoDerivado()  {

std::cout <<  "Método de la clase derivada\n";

}

};
```

## 2. Herencia Protegida (protected)

**Acceso:** Los miembros públicos y protegidos de la clase base se convierten en protegidos en la clase derivada.

**Uso:** Útil cuando se desea que las clases derivadas tengan acceso a los miembros, pero no fuera de la jerarquía de herencia.

```cpp

class Derivada :  protected Base {

// Los miembros públicos y protegidos de Base se convierten en protegidos aquí.

};

```

## 3. Herencia Privada (private)

**Acceso:** Todos los miembros de la clase base se convierten en privados en la clase derivada.  
**Uso:** Se utiliza cuando no se desea que las clases derivadas expongan la interfaz de la clase base.

```cpp
class Derivada : private Base {
    // Todos los miembros de Base se convierten en privados aquí.
};
```

## Constructores y Destructores en la Herencia

### Constructores

El constructor de la clase base se ejecuta antes que el constructor de la clase derivada. Para inicializar la clase base desde la clase derivada, se utiliza la siguiente sintaxis:

```cpp
class Base {
public:
    Base(int x) {
        std::cout << "Constructor de la clase base con valor: " << x << "\n";
    }
    ~Base() {
        std::cout << "Destructor de la clase base\n";
    }
};

class Derivada : public Base {
public:
    Derivada(int x, int y) : Base(x) { // Inicialización de la clase base
        std::cout << "Constructor de la clase derivada con valor: " << y << "\n";
    }
    ~Derivada() {
        std::cout << "Destructor de la clase derivada\n";
    }
};
```

### Destructores

El destructor de la clase base se ejecuta después que el destructor de la clase derivada. Los destructores son utilizados para liberar recursos que una clase puede haber adquirido durante su vida útil, como memoria dinámica, manejadores de archivos, conexiones de red, entre otros. Asegurarse de que los destructores se ejecuten en el orden correcto garantiza que todos los recursos sean liberados adecuadamente y evita fugas de memoria o recursos.

```cpp
int main() {
    Derivada obj(10, 20);
    return 0;
}
```

## Herencia Múltiple

En C++, una clase puede heredar de más de una clase base. Esto se llama herencia múltiple.

```cpp
class Base1 {
public:
    void metodoBase1() {
        std::cout << "Método de Base1\n";
    }
};

class Base2 {
public:
    void metodoBase2() {
        std::cout << "Método de Base2\n";
    }
};

class Derivada : public Base1, public Base2 {
public:
    void metodoDerivado() {
        std::cout << "Método de la clase derivada\n";
    }
};
```

### Consideraciones

La herencia múltiple puede llevar a problemas de ambigüedad, especialmente si las clases base tienen métodos o atributos con el mismo nombre. Para resolver ambigüedades, se puede usar la resolución de ámbito:

```cpp
class Derivada : public Base1, public Base2 {
public:
    void metodo() {
        Base1::metodoBase1(); // Resuelve la ambigüedad
        Base2::metodoBase2();
    }
};
```

## Implementación de un Constructor en una Clase Derivada y Creación de Objetos

### Implementación del Constructor en la Clase Derivada

Para implementar un constructor en una clase derivada y inicializar la clase base, se utiliza la lista de inicialización del constructor. Aquí hay un ejemplo:

```cpp
#include <iostream>

class Base {
public:
    Base(int x) {
        std::cout << "Constructor de la clase base con valor: " << x << "\n";
    }
    ~Base() {
        std::cout << "Destructor de la clase base\n";
    }
};

class Derivada : public Base {
public:
    // Constructor de la clase derivada que inicializa la clase base
    Derivada(int x, int y) : Base(x) {
        std::cout << "Constructor de la clase derivada con valor: " << y << "\n";
    }
    ~Derivada() {
        std::cout << "Destructor de la clase derivada\n";
    }
};
```

## Creación de Objetos de la Clase Derivada

A continuación, se muestra cómo crear objetos de la clase derivada y observar la salida:

```cpp
int main() {
    // Crear un objeto de la clase Derivada
    Derivada obj(10, 20);
    return 0;
}
```
