#include "DHT.h"

#define DHTPIN A0
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

const int ledVerde = 3;
const int ledAmarelo = 2;
const int ledVermelho = 4;

void setup() {

  Serial.begin(9600);

  dht.begin();

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

}

void loop() {

  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  if (isnan(temperatura) || isnan(umidade)) {

    Serial.println("Erro ao ler o DHT22");

    delay(10000);

    return;

  }

  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);


  Serial.println("===== GEOVISION =====");

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.println(" %");

  if (temperatura > 30 && umidade < 25) {

    digitalWrite(ledVermelho, HIGH);

    Serial.println("ALERTA: Ilha de calor detectada \n Aumentar arborização na área!");

  }


  else if (
      temperatura >= 26 &&
      temperatura <= 30 &&
      umidade >= 26 &&
      umidade <= 30
  ) {

    digitalWrite(ledAmarelo, HIGH);

    Serial.println("Possível surgimento de uma ilha de calor");

  }

  else {

    digitalWrite(ledVerde, HIGH);

    Serial.println("Nenhuma ilha de calor detectada");

  }

  Serial.println("------------------------------");

  delay(10000);

}