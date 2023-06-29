# Materials
1. DOIT ESP32 DEVKIT V1
2. ILI9341 2.8" SPI TFT LCD Display Touch Panel 240X320
3. TMP36 Temperature Sensor

# Pinout Diagram
## ESP32
cid:image001.jpg@01D9A498.7D2C4DA0![image](https://github.com/IndiraMariya/ESP32/assets/82353064/75e4852e-f74e-477b-a9ad-12b1e1648977)

## ESP32 to LCD
<img width="1351" alt="image" src="https://github.com/IndiraMariya/ESP32/assets/82353064/549a2bba-702a-4cbe-99ce-e07f1754a522">

## Modify User_Setup.h
```
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS    15  // Chip select control pin
#define TFT_DC    2  // Data Command control pin
#define TFT_RST   4  // Reset pin (could connect to RST pin)
#define TFT_RST  -1  // Set TFT_RST to -1 if display RESET is connected to ESP32 board RST
```

# Resources

[Using a 2.8in SPI LCD Touchscreen ILI9341 with an ESP32 on the new Arduino IDE 2](https://youtu.be/9vTrCThUp5U)

[Setting Up The ESP32 Board — And Make It Blink.](https://medium.com/i-learn-esp32-and-you-should-too/setting-up-the-esp32-board-c6bdf11756b0)

