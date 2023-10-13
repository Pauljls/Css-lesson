Lector (){
while (TRUE){
Sección no crítica
wait(semáforo1)
contador++;
if (contador =1)
wait(semáforo2)
signal(semáforo1)
Acceso al recurso (LECTURA)
wait(semáforo1)
contador--
if (contador=0)
signal(semáforo2);
signal (semáforo1)
}
}