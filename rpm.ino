volatile int contador = 0;                                 

void setup() {
  Serial.begin(57600);  
  attachInterrupt(0,interrupcion0,RISING);   
}

void loop() {
  delay (999);
  Serial.print (contador*20);           
  Serial.println (" RPM");                // El numero 3 depende del número aspas de la hélice del motor en prueba
  
  contador = 0;
}

void interrupcion0() {               // Función que se ejecuta durante cada interrupción
  contador++;
  
                             // Se incrementa en uno el contador
}


