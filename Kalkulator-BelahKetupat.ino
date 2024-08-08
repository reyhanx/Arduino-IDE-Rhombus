void setup() {
  
  Serial.begin(9600);
}

void loop() {
  int d1, d2, x, pilihan ;
  int langkah = 1;

  Serial.println("Mencari hasil dari belah ketupat");
  Serial.println("1.Keliling");
  Serial.println("2.Luas");


  while (langkah == 1) {
    while (Serial.available()) {
      pilihan = Serial.parseInt();
      langkah = 2;
    }
  }

  switch (pilihan) {
    case (1):
      Serial.print("anda memilih keliling, masukan s : ");
      while (langkah == 2) {
        while (Serial.available()) {
          d1 = Serial.parseInt();
          Serial.println(d1);
          langkah = 3;
        }
      }

      x = 4 * d1;

      Serial.print("hasil operasi dari belah ketupat : ");
      Serial.println(x);
      Serial.println();
      break;
    
    case (2):
      Serial.print("anda memilih luas, d1 : ");
      while (langkah == 2) {
        while (Serial.available()) {
          d1 = Serial.parseInt();
          Serial.println(d1);
          langkah = 3;
        }
      }
      Serial.print("Silakan masukan nilai d2 : ");
      while (langkah == 3) {
        while (Serial.available()) {
          d2 = Serial.parseInt();
          Serial.println(d2);
          langkah = 4;
        }
      }

      x = 0.5 * d1 * d2;

      Serial.print("hasil operasi dari luas belah ketupat : ");
      Serial.println(x);
      Serial.println();
      break;

  }
}