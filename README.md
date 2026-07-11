Problema hallado al reemplazar el operando usado en la función de comparación en el algoritmo sort.
Al pasar de ">" a ">=", el algoritmo parece tener errores al ordenar e integra un valor '0' desconocido dentro del vector de enteros.
Además al finalizar el programa, aparentemente al llamar el destructor del vector, lanza el siguiente error:
- double free or corruption (out)
- Aborted (core dumped)
