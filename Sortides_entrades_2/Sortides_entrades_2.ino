/****************************************************************                                                             
**                       titulo :                              **                                                             
**                       Sortides_entrades_1                   **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 06/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************
int LED_1=5;
int LED_2=6;
int LED_3=7;
int LED_4=8;
int LED_5=9;
int LED_6=10;
int LED_7=11;
int LED_8=12;

//************************* SETUP *******************************
 
void setup() {               // configura el final de salida
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
  
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, LOW);
  digitalWrite(LED_7, LOW);
  digitalWrite(LED_8, LOW);
}

//************************* LOOP ********************************

void loop() {                // inicia el bucle del programa
  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, HIGH);
  digitalWrite(LED_6, LOW);
  digitalWrite(LED_7, HIGH);
  digitalWrite(LED_8, LOW); 
  delay(4000);
   digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, HIGH);
  digitalWrite(LED_7, LOW);
  digitalWrite(LED_8, HIGH); 
  delay(4000);
}

//************************* FUNCIONS ****************************
