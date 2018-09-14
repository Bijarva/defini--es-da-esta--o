
/* Parametros de ajuste dos sensores e bomba */
#define SECO_SOLO      40
#define MOLHADO_SOLO     80
#define FRIO_TEMP     35
#define QUENTE_TEMP      50
#define TIME_BOMBA_ON  15
#define TIME_PROTECAOBOMBA_ON  15

/* TEMPORIZADORES EM SEGUNDOS */
#define READ_BUTTONS_TM   1L  
#define READ_SOIL_TEMP_TM 2L
#define READ_SOIL_HUM_TM  10L
#define READ_AIR_DATA_TM  2L
#define AUTO_CTRL_TM      60L     

/* DHT22*/

//float airHum = 0;
//float airTemp = 0;

/* Definições do sensor de umidade do solo */
#define soilMoisterPin A0          // define entrada do sensor de umidade do solo no pino Analogico 0.
#define soilMoisterVcc 8           // define saida de alimentação do sensor de umidade do solo no pino digital 8.
int soilMoister = 0;

/* Sensor de temperatura DS18B20 */
#define ONE_WIRE_BUS  2            // define pino de entrada do sensor de temperatura DS18B20 no pino digital 2.
float soilTemp;

/* Definições dos reles */
#define BOMBA_PIN 6               // define bomba no pin 6
#define PROTECAOBOMBA_PIN 7       // define bomba no pin 7       
boolean bombaStatus = 0;
boolean protecaobombaStatus = 0;

/* Definições dos botões */
#define BOMBA_ON_BUTTON 9        //Define o botão de acionamento da bomba no pino 9
#define PROTECAOBOMBA_ON_BUTTON 11       //push-button PROTEÇÃO BOMBA  (Green)



