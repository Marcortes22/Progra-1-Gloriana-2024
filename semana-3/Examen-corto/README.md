# Proyecto: Gestión de Productos y Contenedores

## Clase Producto (6 puntos)

### 1. Definición de Atributos (1 punto)

- Defina los atributos de la clase `Producto`.
  - **Nota:** Los valores para la categoría podrían incluir: lácteos, carnes, verduras, hortalizas, entre otros.

### 2. Implementación de Métodos Constructores y Accesores (4 puntos)

- Implemente los siguientes métodos:
  - Constructor por defecto.
  - Constructor con parámetros.
  - Métodos `setter` y `getter` para cada atributo.

### 3. Implementación del Método `toString()` (1 punto)

- Implemente el método `toString()` que retorne un string con todos los atributos de la clase.

## Clase Contenedor (40 puntos)

### 1. Definición de Atributos (2 puntos)

- Defina los atributos de la clase `Contenedor`.

### 2. Implementación de Métodos Constructores y Accesores (2 puntos)

- Implemente los siguientes métodos:
  - Constructor por defecto.
  - Constructor con parámetros.
  - Métodos `setter` y `getter` para cada atributo.

### 3. Implementación de Métodos para Gestionar el Contenedor (36 puntos)

- Implemente los siguientes métodos:

#### a. `agregarProducto(Producto producto): void` (3 puntos)

- Este método permite agregar un nuevo producto al contenedor. Debe validar que exista espacio en el vector antes de realizar la operación.

#### b. `imprimirProductos(): void` (3 puntos)

- Este método permite imprimir toda la lista de productos almacenados en el vector.

#### c. `imprimirProductos(string categoria): void` (10 puntos)

- Método sobrecargado que permite imprimir solamente los productos pertenecientes a la categoría indicada en el parámetro.
  - Al final de la impresión, debe mostrar la suma de las cantidades de los productos correspondientes a la categoría indicada.

#### d. `buscarProducto(int codigo): Producto` (5 puntos)

- Este método recibe un código de producto como parámetro, lo busca en el vector y, si está registrado, devuelve el producto con toda su información. En caso contrario, devuelve un objeto `Producto` vacío.

#### e. `montoInventario(): double` (10 puntos)

- Este método debe devolver el monto total del inventario, que corresponde a la suma del producto del precio por la cantidad existente de cada producto.

#### f. `comprarProducto(int codigo, int cantidad_compra): void` (5 puntos)

- Este método recibe un código de producto y la cantidad que se desea comprar. Si el producto existe en el vector y hay suficiente cantidad, se debe restar la cantidad comprada de la cantidad existente.

## Main (8 puntos)

### 1. Solicitud y Agregación de Producto (2 puntos)

- Solicite los datos de un nuevo producto al usuario y agréguelo al contenedor.

### 2. Cálculo del Monto del Inventario (2 puntos)

- Llame al método `montoInventario()` e imprima en pantalla el resultado.

### 3. Compra de Producto (2 puntos)

- Solicite la información necesaria para llamar al método `comprarProducto(int codigo, int cantidad_compra): void` y ejecute el método.

### 4. Impresión de Productos por Categoría (2 puntos)

- Solicite la información necesaria para llamar al método `imprimirProductos(string categoria): void` y ejecute el método.
