# Ejercicio 2

1. ### ¿Cuál es la diferencia en C entre un método que no recibe parámetros y uno que recibe void?
   A grandes rasgos, un método que recibe "void" le está diciendo al compilador que no quiere recibir ningún tipo de parámetros. En estos casos, el compilador puede decirle a una desarrollador si está o no comietiendo errores.
2. ### ¿Qué diferencia hay entre prink y printf?
   La mayor diferencia es que printk() puede especificar el nivel del log. El kernel utiliza este nivel para decidir si debe de imprimir algo a la consola.
3. ### ¿Qué es y para qué sirve KERN_INFO?
   KERN_INFO es un nivel de loggeo. Se utiliza para dar información sobre cualquier cosa, siendo un nivel 6. Por el orden de la lista, es uno de los menos importantes, siendo 0 el KERN_EMERG.
