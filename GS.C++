#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int ledVerde = 10;
const int ledAmarelo = 9;
const int ledVermelho = 8;
const int buzzer = 7;
const int ledBoia = 6; // Novo LED para simular o dispositivo boiando

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ledBoia, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("Status da agua:");
}

void loop() {
  String parametro = "Mediana"; // Simulando que os dados coletados indicam "Mediana"

  if (parametro == "Otima") {
    lcd.setCursor(0, 1);
    lcd.print("Otima       ");
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzer);
  } else if (parametro == "Mediana") {
    lcd.setCursor(0, 1);
    lcd.print("Mediana     ");
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzer);
  } else if (parametro == "Insalubre") {
    lcd.setCursor(0, 1);
    lcd.print("Insalubre   ");
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    tone(buzzer, 1000);
  }

  // LED de boia sempre aceso
  digitalWrite(ledBoia, HIGH);

  delay(1000);
}
