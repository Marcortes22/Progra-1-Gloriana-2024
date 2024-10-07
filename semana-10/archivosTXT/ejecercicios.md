# Ejercicios de Manipulación de Archivos en C++

## 1. Gestión de Contactos (Acceso secuencial)

**Objetivo**: Crear un programa que permita gestionar una lista de contactos y almacenarla en un archivo de texto.

**Descripción**:

- El programa debe permitir agregar y mostrar contactos.
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
  - Generar una copia del archivo de inventario.

**Operaciones**:

- Leer el archivo de forma secuencial para mostrar los productos.
- Al generar una copia del archivo, se debe crear un archivo temporal y copiar todos los datos del archivo original a este nuevo archivo.

---

## 3. Notas de Estudiantes

**Objetivo**: Manejar el registro de notas de estudiantes y guardarlas en un archivo de texto.

**Descripción**:

- El archivo `notas.txt` almacenará el nombre del estudiante y su calificación.
- El programa debe:
  - Registrar nuevas notas.
  - Mostrar las notas de todos los estudiantes.
  - Mostrar solo una nota en la linea que el usuario quiera(validar que la linea existe).

**Operaciones**:

- Uso de `fstream` para lectura y escritura.
- Lectura secuencial para mostrar.
- Lectura unica para mostrar un elemento.

---
