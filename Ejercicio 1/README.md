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
