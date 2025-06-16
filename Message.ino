
  #include <Wire.h> 
  #include <LiquidCrystal_I2C.h>

  LiquidCrystal_I2C lcd(0x27,20,4);

  void setup()
  {     
                 
    lcd.init();
    lcd.backlight();

                lcd.setCursor(0,0);
                lcd.print("Hi");
                delay(2000);
                

                lcd.setCursor(3,0);
                lcd.print("Alice!");
                delay(2200);
                lcd.clear();



                lcd.setCursor(0,0);
                lcd.print("Di ");
                delay(500);
                lcd.print("mo ");
                delay(500);
                lcd.print("ba ");
                delay(500);
                lcd.print("ako ");
                delay(500);

                lcd.setCursor(0,1);
                lcd.print("lilisanin? ");
               
 delay(1700);
 lcd.clear();

                lcd.setCursor(0,0);
                lcd.print("Hindi ");
                delay(500);
                lcd.print("pa ");
                delay(500);
                lcd.print("ba ");
                delay(500);
                lcd.setCursor(0,1);
                lcd.print("sapat ");
                


delay(500);
lcd.clear();

                lcd.setCursor(0,0);  
                lcd.print("pagpapahirap ");
                delay(500);
                lcd.setCursor(0,1); 
                lcd.print("sa ");
                delay(400);
                lcd.print("'kin? ");

 delay(1700);
 lcd.clear();

                lcd.setCursor(0,0);  
                lcd.print("Hindi ");
                delay(500);
                lcd.print("na ");
                delay(500);
                lcd.print("ba ");
                delay(500);

                lcd.setCursor(0,1); 
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

                lcd.setCursor(0,0);  
                lcd.print("Hindi ");
                delay(500);
                lcd.print("na ");
                delay(500);
                lcd.print("ba ");
                delay(500);

                lcd.setCursor(0,1); 
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

                lcd.setCursor(0,0);  
                lcd.print("Hindi ");
                delay(600);
                lcd.print("na ");
                delay(500);
                
                lcd.setCursor(0,1);
                lcd.print("ma");
                delay(500);

                lcd.print("ka");
                delay(500);

                lcd.print("la");
                delay(500);

                lcd.print("ya");
                delay(500);

                lcd.print(" :( ");

                delay(1500);
lcd.clear();

                lcd.setCursor(0,0);  
                lcd.print("remove feelings");
                lcd.setCursor(0,1);  
                lcd.print(".exe");
                delay(2000);

                lcd.clear();
                lcd.print("SYSTEM ERROR...");
                delay(1500);
  }


  void loop()
  {
                lcd.clear();
                lcd.print("Xx#4!@%&Z?9~^*>");
                lcd.setCursor(0,1);
                lcd.print("!!^&7*Zq$#>><%Y");
                delay(200);

                lcd.clear();
                lcd.print("9@^>!#%$x*7&Qz^");
                lcd.setCursor(0,1);
                lcd.print("~><$!7*Z#@XxY&%");
                delay(200);

                lcd.clear();
                lcd.print("*^&@#>9$Z!Qx7%#");
                lcd.setCursor(0,1);
                lcd.print("Z*7>!^@x$#Y&Q$!");
                delay(200);

                lcd.clear();
                lcd.print("><*7Z!@#^%Qx$&9");
                lcd.setCursor(0,1);
                lcd.print("9&$xQ@*!#%^Z7><");
                delay(200);

                lcd.clear();
                lcd.print("#$^!X7&*@?>9Zx%");
                lcd.setCursor(0,1);
                lcd.print("!Z7*><$Q#&x@9^>");
                delay(200);

                lcd.clear();
                lcd.print("Qx7^!@#*Z$%&><9");
                lcd.setCursor(0,1);
                lcd.print(">^$9&*@!xZ#7%><");
                delay(200);

                lcd.clear();
                lcd.print("><%$7Z!@Q#x&^*9");
                lcd.setCursor(0,1);
                lcd.print("!^&$9#xZ*@7>Q><");
                delay(200);

                lcd.clear();
                lcd.print("X#^7Z*!&Q$>%@9x");
                lcd.setCursor(0,1);
                lcd.print("$Q!>9Z^*@x&7#><");
                delay(200);

                lcd.clear();
                lcd.print(">!#&xQ7^*Z$%@><");
                lcd.setCursor(0,1);
                lcd.print("%Z@*Qx7!#&><$^");
                delay(200);

                lcd.clear();
                lcd.print("><^*QZ9!$#&x@7>");
                lcd.setCursor(0,1);
                lcd.print("@7xZ&$Q!#*^><%9");
                delay(200);
  }
