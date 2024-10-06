# Ejercicios de Manipulación de Archivos en C++

## 1. Gestión de Contactos (Acceso secuencial)

**Objetivo**: Crear un programa que permita gestionar una lista de contactos y almacenarla en un archivo de texto.

**Descripción**:

- El programa debe permitir agregar, mostrar y buscar contactos.
- Cada contacto tendrá un nombre, un número de teléfono y un email.
- Los contactos se deben almacenar en un archivo de texto llamado `contactos.txt`.
- El programa debe abrir el archivo en modo secuencial para leer todos los contactos al inicio y escribir al final los nuevos contactos.

**Operaciones**:

- Leer el archivo secuencialmente para mostrar los contactos.
- Añadir nuevos contactos usando la opción `ios::app`.

---

## 2. Inventario de Productos

**Objetivo**: Crear un inventario básico de productos en una tienda y almacenarlo en un archivo de texto.

**Descripción**:

- Cada producto tendrá un ID, nombre y cantidad en stock.
- El archivo `inventario.txt` debe almacenar estos datos.
- El programa debe permitir:
  - Agregar productos.
  - Mostrar productos.
  - Actualizar la cantidad de un producto (reescribiendo el archivo entero).

**Operaciones**:

- Leer el archivo de forma secuencial para mostrar los productos.
- Al actualizar la cantidad de un producto, se debe leer todo el archivo, modificar los datos correspondientes y sobrescribir el archivo completo (usando `ios::trunc`).

---

## 3. Notas de Estudiantes

**Objetivo**: Manejar el registro de notas de estudiantes y guardarlas en un archivo de texto.

**Descripción**:

- El archivo `notas.txt` almacenará el nombre del estudiante y su calificación.
- El programa debe:
  - Registrar nuevas notas.
  - Mostrar las notas de todos los estudiantes.
  - Calcular el promedio de las calificaciones y mostrar a los estudiantes que están aprobados (nota >= 70).

**Operaciones**:

- Uso de `fstream` para lectura y escritura.
- Lectura secuencial para mostrar y calcular promedios.

---

## 4. Registro de Tareas

**Objetivo**: Implementar un programa para gestionar una lista de tareas.

**Descripción**:

- El archivo `tareas.txt` almacenará las tareas pendientes y completadas.
- Cada tarea tendrá un título, descripción y estado (pendiente o completada).
- El programa debe permitir agregar nuevas tareas y marcar las tareas como completadas, modificando el archivo.

**Operaciones**:

- Abrir el archivo en modo lectura y mostrar las tareas.
- Modificar el estado de una tarea y sobrescribir el archivo.
- Eliminar tareas completadas y reescribir el archivo.

---

## 5. Acceso Aleatorio: Registro de Libros

**Objetivo**: Implementar un sistema de biblioteca que permita el acceso aleatorio para modificar registros específicos de libros.

**Descripción**:

- Cada libro tendrá un ID, título y autor.
- El archivo `libros.txt` almacenará la información de los libros.
- El programa debe permitir:
  - Agregar nuevos libros.
  - Buscar un libro por ID y modificar su información usando `seekg` y `seekp`.

**Operaciones**:

- Acceso aleatorio usando `seekg` para encontrar un libro específico.
- Actualización de los detalles del libro en el archivo usando `seekp`.
