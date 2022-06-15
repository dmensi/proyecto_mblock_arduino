/**
 * Ejercicio 3
 * 
 * Mostrar un mensaje diciendo si un número aleatorio es par o impar.
 * 
 * @author Miguel Ángel Abellán
 * @company El Cable Amarillo
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 (Se 
 * permite el uso comercial de la obra y de las posibles obras derivadas, 
 * la distribución de las cuales se debe hacer con una licencia igual a 
 * la que regula la obra original.)
 */

// Inicializamos las variables teniendo en cuenta su tipo de datos
int resultado;

void setup() {
  Serial.begin(9600);
  
  randomSeed(analogRead(0));
  resultado = random(0, 256);
  
  Serial.print("El resultado es: ");
  Serial.println(resultado); 
   
  if(resultado%2 == 0){
    Serial.print("El número es PAR");
  }else{
    Serial.print("El número es IMPAR");
  }
}

void loop() {

}
