
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

#define OLED_SDA 8
#define OLED_SCL 9
#define BUTTON_PREV 2
#define BUTTON_NEXT 3

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  OLED_RESET
);

const int PAGE_COUNT = 3;
int currentPage = 0;

bool previousButtonState = HIGH;
bool nextButtonState = HIGH;

unsigned long lastButtonTime = 0;
const unsigned long debounceDelay = 180;

void drawPage() {
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  switch (currentPage) {
    case 0:
      display.setTextSize(1);
      display.setCursor(25, 5);
      display.println("E-ID CARD");

      display.drawLine(0, 18, 127, 18, SSD1306_WHITE);

      display.setTextSize(2);
      display.setCursor(8, 27);
      display.println("Welcome!");

      display.setTextSize(1);
      display.setCursor(8, 52);
      display.println("Your digital ID");
      break;

    case 1:
      display.setTextSize(1);
      display.setCursor(0, 0);
      display.println("IDENTITY");
      display.drawLine(0, 12, 127, 12, SSD1306_WHITE);

      display.setCursor(0, 20);
      display.println("Name: YOUR NAME");

      display.setCursor(0, 32);
      display.println("ID: YOUR ID");

      display.setCursor(0, 44);
      display.println("School: YOUR SCHOOL");
      break;

    case 2:
      display.setTextSize(1);
      display.setCursor(0, 0);
      display.println("ABOUT");
      display.drawLine(0, 12, 127, 12, SSD1306_WHITE);

      display.setCursor(0, 22);
      display.println("Electronic ID");

      display.setCursor(0, 34);
      display.println("ESP32-C3 powered");

      display.setCursor(0, 50);
      display.println("Page 3 of 3");
      break;
  }

  display.setCursor(100, 54);
  display.print(currentPage + 1);
  display.print("/");
  display.print(PAGE_COUNT);

  display.display();
}

void setup() {
  pinMode(BUTTON_PREV, INPUT_PULLUP);
  pinMode(BUTTON_NEXT, INPUT_PULLUP);

  Wire.begin(OLED_SDA, OLED_SCL);

  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
    while (true) {
      delay(100);
    }
  }

  drawPage();
}

void loop() {
  bool prevState = digitalRead(BUTTON_PREV);
  bool nextState = digitalRead(BUTTON_NEXT);

  if (millis() - lastButtonTime >= debounceDelay) {
    if (previousButtonState == HIGH && prevState == LOW) {
      currentPage = (currentPage - 1 + PAGE_COUNT) % PAGE_COUNT;
      drawPage();
      lastButtonTime = millis();
    }
    else if (nextButtonState == HIGH && nextState == LOW) {
      currentPage = (currentPage + 1) % PAGE_COUNT;
      drawPage();
      lastButtonTime = millis();
    }
  }

  previousButtonState = prevState;
  nextButtonState = nextState;
}
