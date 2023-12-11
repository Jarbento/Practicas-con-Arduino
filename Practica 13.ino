// C++ code
//

#define PULSADOR 10
#define LED_INTEGRADO 13
#define LED 12
#define RELÉ 11

//Declaramos como bool(0 e 1) a varible pulsador.
bool pulsador;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, INPUT);
}

void loop()
{
  //Creamos variable para o pulsador.
  pulsador = digitalRead(10);
  
  //Si pulsador esta activado para de funcionar, senon funciona. 
  if(!pulsador) {	
  	//Encendemos o LED conectado ao pin 13 durante 10S.
  	digitalWrite(LED_BUILTIN, HIGH);
  	delay(10000); // Wait for 10000 millisecond(s)
  	//Apagamos o LED durante 4S.
  	digitalWrite(LED_BUILTIN, LOW);
  	delay(4000); // Wait for 4000 millisecond(s)
  	//Encendemos o LED conectado ao pin 12 e conectamos a bobina conectada ao pin 11 durante 10S.
  	digitalWrite(12, HIGH);
  	digitalWrite(11, HIGH);
  	delay(10000); // Wait for 10000 millisecond(s)
  	//Apagamos o LED e desconectamos a bobina durante 4S.
  	digitalWrite(12, LOW);
  	digitalWrite(11, LOW);
  	delay(4000); // Wait for 4000 millisecond(s)
	}
  else if(pulsador) {
    delay(500);
    }
}
