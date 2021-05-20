# armonArduino-2021
This is a repo to help you get started on developing for the arm chip on arduino

## Arm
1- Launch Arduino.cc IDE. Click on "File" menu and then "Preferences".

The "Preferences" dialog will open, then add the following link to the "Additional Boards Managers URLs" field:

"http://dan.drown.org/stm32duino/package_STM32duino_index.json"

Click "Ok"

2- Click on "Tools" menu and then "Boards > Boards Manager"

The board manager will open and you will see a list of installed and available boards.

3. Select the "STM32 F103Cxxx" and click on install.

After installation is complete an "INSTALLED" tag appears next to the core name.

You can close the Board Manager.

4. Now you can find the STM32 boards package in the "Board" menu.

Select the desired boards series : STM32F103Cxxx

Select the board

### Connection

![image](https://user-images.githubusercontent.com/28790446/119007756-329a3080-b99a-11eb-9db3-d47b747ae2e9.png)

## Africastalking dev kit

[More info](https://blackd0t.gitbook.io/africastalking-eris-devkit-playground/arduino/arduino)

![image](https://user-images.githubusercontent.com/28790446/119009148-822d2c00-b99b-11eb-8d21-2ba46ab2c032.png)

![image](https://user-images.githubusercontent.com/28790446/119010541-d684db80-b99c-11eb-9cfa-004f8b232afa.png)

[More info](https://developers.africastalking.com/docs/iot/eris/eris_dev_board)
## ESP

The ESP32 is an updated version of the ESP8266, which was a chip that took experimenters in the western world by “surprise” in 2014. The original ESP8266 was introduced on a module called the ESP-01, which had very little English documentation so it’s capabilities were largely unknown at the time. Once the documentation was translated into English many experimenters soon became aware of the power of the ESP8266, and it quickly became very popular.

The ESP32 improved upon the ESP32 design in a number of ways.  It offers both Bluetooth and BLE (Bluetooth Low Energy), whereas the ESP8266 only has WiFi (which, of course, the ESP32 also has). It is faster and is available in a dual-core design. It is also capable of operating in an ultra-low-power mode, ideal for battery-powered applications.

Other features of the ESP32 include:

- Up to 18 12-bit Analog to Digital converters.
- Two 8-bit Digital to Analog converters.
- 10 capacitive touch switch sensors.
- Four SPI channels.
- Two I2C interfaces.
- Two I2S interfaces (for digital audio).
- Three UARTs for communications.
- Up to 8 channels of IR remote control.
- Up to 16 channels of LED PWM (pulse width modulation).
- An integrated Hall-effect sensor.
- An ultra-low-power analog preamp.
- An internal low-dropout regulator.
Note that many of the pins on the ESP32 share a number of the above functions, so not all of them are available concurrently.


In order to be able to work with the ESP32 you will need to add an additional source to the Arduino IDE Board Manager and then install the ESP32 boards.

This is actually a lot simpler than it sounds thanks to the folks at Espressif. They have provided a link to a JSON file that takes care of almost everything for you.

If you are not familiar with JSON it is a format of text file that allows structured information to be shared between computers. In this respect, it is similar to XML.

1. Open the Arduino IDE. Make sure that you are at version 1.8 or higher, if not then update your IDE with the latest version.
2. Click on the File menu on the top menu bar.
3. Click on the Preferences menu item. This will open a Preferences dialog box.
4. You should be on the Settings tab in the Preferences dialog box by default.
5. Look for the textbox labeled “Additional Boards Manager URLs”.
6. If there is already text in this box add a coma at the end of it, then follow the next step.
7. Paste the following link into the text box – https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
8. Click the OK button to save the setting.

![image](https://user-images.githubusercontent.com/28790446/119008106-89076f00-b99a-11eb-8542-dd1bd38f1258.png)

Next, you will need to use the new entry to actually add the ESPO32 boards to your Arduino IDE. You do that by following this procedure:

1. In the Arduino IDE click on the Tools menu on the top menu bar.
2. Scroll down to the Board: entry (i.e. Board: Arduino/Genuino Uno).
3. A submenu will open when you highlight the Board: entry.
4. At the top of the submenu is Boards Manager. Click on it to open the Boards Manager dialog box.
5. In the search box in the Boards Manager enter “esp32”.
6. You should see an entry for “esp32 by Espressif Systems”. Highlight this entry and click on the Install button.
7. This will install the ESP32 boards into your Arduino IDE

![image](https://user-images.githubusercontent.com/28790446/119008218-a50b1080-b99a-11eb-9e75-c6125febc044.png)


## Hello World

When using a new development environment or programming for a new device it is traditional to create a “Hello World” program.  Far be it from me to dispense with tradition!

The “Hello World” for microcontrollers is the Blink sketch which, as I’m sure you already know, simply flashes an LED on and off.  While “Hello World” programs and sketches are usually of little practical use they serve a number of functions:

- They familiarize you with the operation of your development library.  In this particular case they let you practice uploading programs to the ESP32 which, as you will soon see, is done a bit differently than an Arduino.
- They get you familiar with the programming syntax. In this case we are using the same C++ that the Arduino uses, so you are likely already familiar with the programming syntax.
- They let you verify that your hardware is working correctly.

```cpp
// LED on GPIO2
int ledPin = 2;

void setup()
{
    // Set LED as output
    pinMode(ledPin, OUTPUT);
    
    // Serial monitor setup
    Serial.begin(115200);
}

void loop()
{
    Serial.print("Hello");
    digitalWrite(ledPin, HIGH);
    
    delay(500);
    
    Serial.println(" world!");
    digitalWrite(ledPin, LOW);
    
    delay(500);
}
```









