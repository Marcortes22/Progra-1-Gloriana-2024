## Ejercicio 3: Herencia y Constructores

### Descripción

Crea una clase base llamada `Empleado` con un atributo `nombre` y un constructor que inicialice el nombre. Luego, crea una clase derivada llamada `Gerente` que herede de `Empleado` y añada un atributo `departamento`. En la clase `Gerente`, añade un constructor que inicialice tanto el nombre (usando el constructor de `Empleado`) como el departamento. Añade un método `mostrarInfo()` en ambas clases para imprimir la información del empleado y del gerente, respectivamente.

### Instrucciones

1. Define la clase base `Empleado` con un atributo `nombre` y un constructor que inicialice `nombre`. Añade un método `mostrarInfo()` para imprimir el nombre.
2. Define la clase derivada `Gerente` que herede de `Empleado` y añada un atributo `departamento`. Crea un constructor que inicialice tanto `nombre` (utilizando el constructor de `Empleado`) como `departamento`. Añade un método `mostrarInfo()` en `Gerente` para imprimir el nombre y el departamento.
3. En el `main()`, crea un objeto de la clase `Gerente`, asigna valores a los atributos y llama al método `mostrarInfo()`.
