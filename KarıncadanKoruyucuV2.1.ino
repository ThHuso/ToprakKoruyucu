 // HUSO DEV
 // HUSO
 // DEVELOPED BY HUSO

#define BUZZER_PIN 8 // Buzzer'ı bağlayacağınız dijital pin numarası
#define DURUM_SURESI 5000 // Buzzer'ın çalışacağı süre (milisaniye cinsinden)
#define BEKLEME_SURESI 2000 // Bekleme süresi (milisaniye cinsinden)

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  // 1. frekans için ..DURUM_SURESI.. saniye boyunca ses çal
  buzz(22); // İstediğiniz 1. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 2. frekansa geç
  buzz(23); // İstediğiniz 2. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 3. frekansa geç
  buzz(24); // İstediğiniz 3. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);
    // 4. frekans için ..DURUM_SURESI.. saniye boyunca ses çal
  buzz(25); // İstediğiniz 1. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 5. frekansa geç
  buzz(26); // İstediğiniz 2. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 6. frekansa geç
  buzz(27); // İstediğiniz 3. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);
    // 7. frekans için ..DURUM_SURESI.. saniye boyunca ses çal
  buzz(28); // İstediğiniz 1. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 8. frekansa geç
  buzz(29); // İstediğiniz 2. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 9. frekansa geç
  buzz(30); // İstediğiniz 3. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);
    // 10. frekans için ..DURUM_SURESI.. saniye boyunca ses çal
  buzz(31); // İstediğiniz 1. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 11. frekansa geç
  buzz(32); // İstediğiniz 2. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 12. frekansa geç
  buzz(33); // İstediğiniz 3. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);
    // 13. frekans için ..DURUM_SURESI.. saniye boyunca ses çal
  buzz(34); // İstediğiniz 1. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 14. frekansa geç
  buzz(35); // İstediğiniz 2. frekans değeri burada, Hz cinsinden

  // Bekleme süresi
  delay(BEKLEME_SURESI);

  // 15. frekansa geç
  buzz(36); // İstediğiniz 3. frekans değeri burada, Hz cinsinden

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