# Ejercicio 1

1. ## ¿Qué puede ver el output cuando realiza estas acciones?

   El output, en mi caso, es que cambia el ID del proceso y el nombre del proceso. En mi caso, cambia a XOrg (ya que estoy en Pop_OS!), y a veces la gnome-shell (gracias a que allí es donde se está mostrando).

2. ## ¿Para qué sirve System Tap?

   System tap, según la wiki de arch linux, es

   > Provides free software infrastructure to simplify the gathering of information about the running linux system.

   Y según [sourceware](https://sourceware.org/systemtap/),

   > (SystemTap) assists diagnosis of a performance or functional problem. Systemtap eliminates the need for the developer to go through the tedious and disruptive instrument, recompile, install, and reboot sequence that may be otherwise required to collect data.

3. ## ¿Qué es una probe?

   Según [Redhat](https://access.redhat.com/documentation/en-us/red_hat_enterprise_linux/7/html/systemtap_beginners_guide/scripts#:~:text=Once%20a%20SystemTap%20session%20is,script%20can%20have%20multiple%20probes.), una probe es un evento, y todos sus "handlers" correspondientes. Estos, colectivamente, son llamados una probe.

   Un solo script puede tener varios de ellos, los cuales forman el cuerpo de la probe.

4. ## ¿Cómo funciona SystemTap?
   Según el tutorial en [SourceWare](https://sourceware.org/systemtap/tutorial.pdf), SystemTap funciona de una manera interesante:
   - Convierte el Script en C
   - Compila el Script de C
   - Crea un módulo del kernel desde dicho Script
   - Activa todos los eventos probe cuando el módulo es cargado
   - Cuando los eventos ocurren en algún procesador, los handles de los compiladores corren
5. ## ¿Qué es hacer profiling y qué tipo de profiling se hace en este ejercicio?
   El profiling, según [el documento aquí demostrado](https://www.princeton.edu/~ota/disk2/1986/8606/860607.PDF), es el acto de análisis sobre un programa dinámico que toma en cuenta el espacio, el tiempo, etc. que toma una computadora para hacer algo. Puede usarse para el análisis de algoritmos, entre otros.
