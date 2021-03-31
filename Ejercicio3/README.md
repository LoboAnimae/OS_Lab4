# Ejercicio 3

1. ### ¿Qué es y para qué sirve el archivo fstab?
   Fstab es la tabla del sistema de archivos del sistema. El punto de montaje es dónde empieza el sistema de archivos.
2. ### ¿Qué almacena el directorio /etc?¿En Windows, quién (hasta cierto punto) funge como /etc?
   ETC es el directorio "etcétera" del sistema Linux. Es el que contiene todos los archivos de configuración del sistema. Este mismo directorio también existe en el sistema Windows, y es conocido por tener el archivo "hosts". Este se encuentra en C:\Windows\System32\Drivers\etc\hosts
3. ### ¿Qué se almacena en /dev y en /dev/disk?
   Dev almacena archivos especiales y archivos de dispositivos. El /dev/disk solo sirve para mostrar los dispositivos I/O conectados que necesitan ser mostrados, tales como sda1, sdn2... sdan.
4. ### ¿Por qué se usa <la dirección completa del link hacia sda> en lugar de sólo /dev/sda, y cuál es el papel que el programa udev cumple en todo esto?
   Udev es un reemplazo para el sistema de archivos DevDS. Permite identificar dispositivos por medio de sus propiedades, por lo que, al usar el archivo dentro del
   by-id, se puede identificar cuál es el dispositivo directamente por su propiedad ID.
5. ### ¿Qué es un block device y qué significado tiene sdxN, donde x es una letra y N es un número, en direcciones como /dev/sdb? Investigue y explique los conceptos de Master Boot Record (MBR) y Volume Boot Rercord (VBR), y su relación con UEFI.
   Un block device es un archivo que refiere a un dispositivo, el cual es diferenciado por un archivo especial de caracteres. Estas "Files" son representadas por un sdxN.
   x es una letra asignada para diferenciar entre los distintos dispositivos, mientras que N es un número que difiere particiones.
6. ### ¿Qué es hacer chain loading?
   Chain loading es un método que permite que los programas de computadora sean reemplazados, utilizando un método parecido a las "assembly lines" de las fábricas, en donde un espacio de memoria es compartido por varios programas.
7. ### ¿Qué se está indicando con la configuración root=”<el file system anotado>”?
   El root normal es /. Se está indicando que el nuevo root es el sda, el cual es el dispositivo con el ID que encontramos anteriormente.
8. ### ¿Qué es vmlinuz?
   VMLinuz es el ejecutable de linux, el cual está localizado en /boot.
9. ### Mencione tres diferencias funcionales entre GRUB y LILO
   - Grub puede ser utilizado por varios tipos de sistemas operativos, mientras que LILO solo puede ser utilizado por sistemas LINUX
   - Grub tiene una UI, mientras que LILO no
   - LILO es mucho más sencillo de configurar que Grub, pero es mucho más simple que este.

Grub ya no quizo mostrar las opciones y se iba directamente al sistema operativo. No tengo Screenshot por esto. Ni siquiera con las snapshot que tomé al instalar el sistema.
