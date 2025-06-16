#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {     
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Hi");
  delay(2000);

  lcd.setCursor(3, 0);
  lcd.print("Alice!");
  delay(2200);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Di ");
  delay(500);
  lcd.print("mo ");
  delay(500);
  lcd.print("ba ");
  delay(500);
  lcd.print("ako ");
  delay(500);

  lcd.setCursor(0, 1);
  lcd.print("lilisanin?");
  delay(1700);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Hindi ");
  delay(500);
  lcd.print("pa ");
  delay(500);
  lcd.print("ba ");
  delay(500);
  lcd.setCursor(0, 1);
  lcd.print("sapat ");
  delay(500);
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("pagpapahirap ");
  delay(500);
  lcd.setCursor(0, 1); 
  lcd.print("sa ");
  delay(400);
  lcd.print("'kin?");
  delay(1700);
  lcd.clear();

  lcd.setCursor(0, 0);  
  lcd.print("Hindi ");
  delay(500);
  lcd.print("na ");
  delay(500);
  lcd.print("ba ");
  delay(500);

  lcd.setCursor(0, 1); 
  lcd.print("ma ");
  delay(500);
  lcd.print("- ");
  delay(400);
  lcd.print("ma");
  delay(300);
  lcd.print("ma");
  delay(300);
  lcd.print("ma");
  delay(300);
  lcd.print("ya");
  delay(300);
  lcd.print("pa?");
  delay(1000);
  lcd.clear();

  lcd.setCursor(0, 0);  
  lcd.print("Hindi ");
  delay(500);
  lcd.print("na ");
  delay(500);
  lcd.print("ba ");
  delay(500);

  lcd.setCursor(0, 1); 
  lcd.print("ma ");
  delay(500);
  lcd.print("- ");
  delay(400);
  lcd.print("ma");
  delay(300);
  lcd.print("ma");
  delay(300);
  lcd.print("ma");
  delay(300);
  lcd.print("ya");
  delay(300);
  lcd.print("pa?");
  delay(1000);
  lcd.clear();

  lcd.setCursor(0, 0);  
  lcd.print("Hindi ");
  delay(600);
  lcd.print("na ");
  delay(500);

  lcd.setCursor(0, 1);
  lcd.print("ma");
  delay(500);
  lcd.print("ka");
  delay(500);
  lcd.print("la");
  delay(500);
  lcd.print("ya");
  delay(500);
  lcd.print(" :(");
  delay(1500);
  lcd.clear();

  lcd.setCursor(0, 0);  
  lcd.print("remove feelings");
  lcd.setCursor(0, 1);  
  lcd.print(".exe");
  delay(2000);

  lcd.clear();
  lcd.print("SYSTEM ERROR...");
  delay(1500);
}

void loop() {
  // Expanded glitch delay array: starts slow, speeds faster gradually
  int glitchDelays[] = {
    200, 195, 190, 185, 180, 175, 170, 165, 160, 155,
    150, 145, 140, 135, 130, 125, 120, 115, 110, 105,
    100, 95, 90, 85, 80, 75, 70, 65, 60, 55,
    50, 45, 40, 35, 30, 25, 20, 15, 10, 8,
    6, 5, 4, 3, 2, 1, 1, 1, 1, 1 // super rapid last few
  };

  for (int i = 0; i < sizeof(glitchDelays) / sizeof(glitchDelays[0]); i++) {
    glitchFrame(glitchDelays[i]);
  }

  // Final shutdown message
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("  SYSTEM FAILURE");
  lcd.setCursor(0, 1);
  lcd.print("    ...goodbye");

  for (int i = 0; i < 8; i++) {
    lcd.noBacklight();
    delay(150);
    lcd.backlight();
    delay(150);
  }

  lcd.clear();
  lcd.noBacklight();
  while (true); // Halt here indefinitely (shutdown)
}

void glitchFrame(int delayTime) {
  lcd.clear();

  String glitches[] = {
    "Xx#4!@%&Z?9~^*>",
    "!!^&7*Zq$#>><%Y",
    "><^*QZ9!$#&x@7>",
    "@7xZ&$Q!#*^><%9",
    "Qx7^!@#*Z$%&><9",
    ">^$9&*@!xZ#7%><",
    "*^&@#>9$Z!Qx7%#",
    "Z*7>!^@x$#Y&Q$!",
    "><*7Z!@#^%Qx$&9",
    "9&$xQ@*!#%^Z7><",
    "#$^!X7&*@?>9Zx%",
    "!Z7*><$Q#&x@9^>"
  };

  int r1 = random(0, sizeof(glitches) / sizeof(glitches[0]));
  int r2 = random(0, sizeof(glitches) / sizeof(glitches[0]));
  lcd.setCursor(0, 0); lcd.print(glitches[r1]);
  lcd.setCursor(0, 1); lcd.print(glitches[r2]);

  lcd.noBacklight();
  delay(delayTime / 2);
  lcd.backlight();
  delay(delayTime);
}

