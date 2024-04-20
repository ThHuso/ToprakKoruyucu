 // HUSO DEV
 // HUSO
 // DEVELOPED BY HUSO

#define BUZZER_PIN 8 // Buzzer'ı bağlayacağınız dijital pin numarası
#define DURUM_SURESI 5000 // Buzzer'ın çalışacağı süre (milisaniye cinsinden)
#define BEKLEME_SURESI 5000 // Bekleme süresi (milisaniye cinsinden)

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // 1. frekans için ..DURUM_SURESI.. saniye boyunca ses çal
  buzz(1000); // İstediğiniz 1. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 2. frekansa geç
  buzz(2000); // İstediğiniz 2. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 3. frekansa geç
  buzz(3000); // İstediğiniz 3. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);
}

void buzz(int frequency) {
  // Buzzer'ı istenilen frekansta çal
  tone(BUZZER_PIN, frequency);
  delay(DURUM_SURESI); // Belirlenen süre boyunca çalıştır
  noTone(BUZZER_PIN); // Buzzer'ı durdur
}


 // HUSO DEV
 // HUSO
 // DEVELOPED BY HUSO