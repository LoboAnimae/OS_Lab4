# Ejercicio 2

1. ### ¿Cuál es la diferencia en C entre un método que no recibe parámetros y uno que recibe void?
   A grandes rasgos, un método que recibe "void" le está diciendo al compilador que no quiere recibir ningún tipo de parámetros. En estos casos, el compilador puede decirle a una desarrollador si está o no comietiendo errores.
2. ### ¿Qué diferencia hay entre prink y printf?
   La mayor diferencia es que printk() puede especificar el nivel del log. El kernel utiliza este nivel para decidir si debe de imprimir algo a la consola.
3. ### ¿Qué es y para qué sirve KERN_INFO?
   KERN_INFO es un nivel de loggeo. Se utiliza para dar información sobre cualquier cosa, siendo un nivel 6. Por el orden de la lista, es uno de los menos importantes, siendo 0 el KERN_EMERG.
4. ### ¿Qué es una goal definition o definición de meta en un Makefile, y qué se está haciendo con la definición de meta obj-m?
   Las metas son los objetivos más altos de un MakeFile. Por el otro lado, obj-m especifica los archivos objeto que son compilados como módulos de kernel.
5. ### ¿Qué función tienen las lineas all: y clean:?
   Como ha sido declarado en laboratorios anteriores (donde incluí Makefiles), el all es el default cuando no se especifica nada en el make. En el caso de este Makefile, se corre el comando "make –C /lib/modules/$(shell uname –r)/build M=$(shell pwd) clean". A grandes rasgos, trata de hacer un make en el directorio (se sabe gracias a la flag -C) descrito ahí.
6. ### ¿Qué hace la opción -C en este Makefile?
   Describe que el siguiente parámetro es un directorio.
7. ### ¿Qué hace la opción M en este Makefile?
   Describe dónde está el make necesario.
