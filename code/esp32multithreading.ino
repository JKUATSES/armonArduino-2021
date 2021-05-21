#define ONBAORD_LED_PIN 2
#define BREADBOARD_LED_PIN 2
#define SETUP_DELAY 1000

TaskHandle_t Task1;
TaskHandle_t Task2;

void Task1code(void *pvParameters);
void Task2code(void *pvParameters);

void setup()
{
    Serial.begin(115200);
    delay(SETUP_DELAY);
    pinMode(ONBAORD_LED_PIN, OUTPUT);
    pinMode(BREADBOARD_LED_PIN, OUTPUT);
            
    xTaskCreatePinnedToCore(Task1code, "Task1", 10000, NULL, 1, &Task1, 0);
    delay(SETUP_DELAY);

    xTaskCreatePinnedToCore(Task2code, "Task2", 10000, NULL, 1, &Task2, 1);
    delay(SETUP_DELAY);
}


void loop(){
}

void Task1code(void *pvParameters)
{
    for (;;)
    {
        digitalWrite(ONBAORD_LED_PIN, HIGH);
        delay(2000);
        digitalWrite(ONBAORD_LED_PIN, LOW);
    }
}

void Task2code(void *pvParameters)
{
    
    for (;;)
    {  

      digitalWrite(BREADBOARD_LED_PIN, HIGH);
      delay(1000);
      digitalWrite(BREADBOARD_LED_PIN, LOW);
    }
}
