## Comprobación del tema: Polimorfismo

Desarrolle una aplicación que calcule el monto a cobrar por cada transporte (viaje) que realiza un conductor.

Tome en cuenta las siguientes consideraciones:

- Cada conductor cobra un monto fijo de $10 al que hay que sumarle $5 por cada hora conducida en cualquier tipo de transporte.

- Según el tipo de transporte elegido se cobran pagos extras de diferentes maneras, que se explican a continuación:
  - **Transporte de personas:** Extra de $1 por hora si se trata de un transporte colectivo (el número de personas transportadas es mayor de 4) y $0.5 si no es transporte colectivo (el número de personas transportadas es menor a 4).
  - **Transporte de mercancías:** Extra de $2 por tonelada transportada.
  - **Transporte de mercancías peligrosas:** Igual que el transporte de mercancías más un fijo extra de $50 por cada transporte realizado.

Todas estas clases heredan de la clase `Transporte`, cada una de las sub-clases calcula de manera diferente el monto a cobrar por el transporte realizado. Por lo que existe un método virtual puro, donde las subclases definen su comportamiento **Polimorfismo**.

Cree un vector polimórfico que pueda almacenar los diferentes tipos de transportes.
